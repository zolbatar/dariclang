#include <iostream>
#include "llvm/Bitcode/BitcodeWriter.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/ADT/Triple.h"
#include "llvm/Analysis/TargetLibraryInfo.h"
#include "llvm/Analysis/TargetTransformInfo.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/DiagnosticInfo.h"
#include "llvm/IR/DiagnosticPrinter.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/LLVMRemarkStreamer.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Verifier.h"
#include "llvm/MC/SubtargetFeature.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/FileSystem.h"
#include "llvm/Support/Host.h"
#include "llvm/Support/ManagedStatic.h"
#include "llvm/Support/SourceMgr.h"
#include "llvm/Support/TargetSelect.h"
#include "llvm/Target/TargetLoweringObjectFile.h"
#include "llvm/Transforms/Utils/Cloning.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
#include "llvm/Transforms/IPO.h"
#include "lld/Common/Driver.h"
#include "CompilerLLVM.h"
#include "llvm/CodeGen/CommandFlags.h"

const bool verbose = false;

#ifdef __APPLE__

#include <sys/sysctl.h>

#endif
#ifdef WINDOWS
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

CompilerLLVM::CompilerLLVM() {
    LLVMInitializeX86Target();
    LLVMInitializeAArch64Target();

    LLVMInitializeX86TargetInfo();
    LLVMInitializeAArch64TargetInfo();

    LLVMInitializeX86TargetMC();
    LLVMInitializeAArch64TargetMC();

    LLVMInitializeX86AsmPrinter();
    LLVMInitializeAArch64AsmPrinter();

    LLVMInitializeX86AsmParser();
    LLVMInitializeAArch64AsmParser();
}

std::string MCPU = "native";

std::list<std::string> MAttrs;

std::string getCPUArch() {
#ifdef __APPLE__
    uint32_t cputype = 0;
    size_t size = sizeof(cputype);
    int res = sysctlbyname("hw.cputype", &cputype, &size, NULL, 0);
    if (res) {
        std::cout << "Get CPU type error: " << res << std::endl;
        exit(1);
    } else {
        if (cputype == 7) {
            return "x86-64";
        } else {
            return "aarch64";
        }
    }
#endif
#ifdef WINDOWS
    return "x86-64";
#endif
}

static std::string getCPUStr() {
    // If user asked for the 'native' CPU, autodetect here. If autodection fails,
    // this will set the CPU to an empty string which tells the target to
    // pick a basic default.
    if (MCPU == "native")
        return std::string(llvm::sys::getHostCPUName());

    return MCPU;
}

static std::string getFeaturesStr() {
    llvm::SubtargetFeatures Features;

    // If user asked for the 'native' CPU, we need to autodetect features.
    // This is necessary for x86 where the CPU might not support all the
    // features the autodetected CPU name lists in the target. For example,
    // not all Sandybridge processors support AVX.
    if (MCPU == "native") {
        llvm::StringMap<bool> HostFeatures;
        if (llvm::sys::getHostCPUFeatures(HostFeatures))
            for (auto &F: HostFeatures)
                Features.AddFeature(F.first(), F.second);
    }

    for (auto const &MAttr: MAttrs)
        Features.AddFeature(MAttr);

    return Features.getString();
}

void CompilerLLVM::SetupProfile(CompilerOptions options, std::string module) {
    llvm::CodeGenOpt::Level OLvl = llvm::CodeGenOpt::Default;
    this->options = options;
    if (options.optimise) {
        OLvl = llvm::CodeGenOpt::Aggressive;
    }

    llvm::Triple TheTriple;
    TheTriple.setTriple(llvm::sys::getDefaultTargetTriple());

    // Options
    std::string CPUArch = getCPUArch();
    std::string CPUStr = getCPUStr();
    std::string FeaturesStr = getFeaturesStr();
    std::cout << "CPU Architecture: " << CPUArch << std::endl;
    if (verbose) {
        std::cout << "CPU String: " << CPUStr << std::endl;
        std::cout << "CPU Features: " << FeaturesStr << std::endl;
    }

    // Target
    llvm::TargetOptions Options;
    std::string Error;
    const llvm::Target *TheTarget = llvm::TargetRegistry::lookupTarget(CPUArch, TheTriple, Error);
    if (Error.length() > 0) {
        std::cout << "LLVM Error code: " << Error << std::endl;
        exit(1);
    }

    Target = std::unique_ptr<llvm::TargetMachine>(TheTarget->createTargetMachine(
            TheTriple.getTriple(), CPUStr, FeaturesStr,
            Options, llvm::Reloc::Model::Static, llvm::None, OLvl, options.target != CompileTarget::EXE));
    if (Target == nullptr) {
        std::cout << "Couldn't allocate target machine\n";
        exit(1);
    }

    // LLVM Core stuff
    Context = std::make_unique<llvm::LLVMContext>();
    Module = std::make_unique<llvm::Module>(module, *Context);
    auto dl = Target->createDataLayout();
    Module.get()->setDataLayout(dl);

    // Types
    TypeNone = llvm::Type::getVoidTy(Module->getContext());
    TypeBit = llvm::Type::getInt1Ty(Module->getContext());
    TypeFloat = llvm::Type::getDoubleTy(Module->getContext());
    TypeByte = llvm::Type::getInt8Ty(Module->getContext());
    TypeInt = llvm::Type::getInt64Ty(Module->getContext());
    TypeString = llvm::Type::getInt8PtrTy(Module->getContext());

    Module->getOrInsertFunction("PrintByte", TypeNone, TypeByte);
    Module->getOrInsertFunction("PrintInteger", TypeNone, TypeInt);
    Module->getOrInsertFunction("PrintFloat", TypeNone, TypeFloat);
    Module->getOrInsertFunction("PrintString", TypeNone, TypeString);
    Module->getOrInsertFunction("PrintByteFormat", TypeNone, TypeByte, TypeString);
    Module->getOrInsertFunction("PrintIntegerFormat", TypeNone, TypeInt, TypeString);
    Module->getOrInsertFunction("PrintFloatFormat", TypeNone, TypeFloat, TypeString);
    Module->getOrInsertFunction("PrintStringFormat", TypeNone, TypeString, TypeString);
    Module->getOrInsertFunction("PrintNewline", TypeNone);

    // Maths
    Module->getOrInsertFunction("pi", TypeFloat);
    Module->getOrInsertFunction("acos", TypeFloat, TypeFloat);
    Module->getOrInsertFunction("asin", TypeFloat, TypeFloat);
    Module->getOrInsertFunction("my_atan", TypeFloat, TypeFloat);
    Module->getOrInsertFunction("tan", TypeFloat, TypeFloat);
    Module->getOrInsertFunction("deg", TypeFloat, TypeFloat);
    Module->getOrInsertFunction("rad", TypeFloat, TypeFloat);
    Module->getOrInsertFunction("sgn", TypeInt, TypeFloat);

    // Chrono
    Module->getOrInsertFunction("_time", TypeInt);
    Module->getOrInsertFunction("highprec", TypeInt);
    Module->getOrInsertFunction("times", TypeString);

    // String
    Module->getOrInsertFunction("String_Compare", TypeInt, TypeString, TypeString);
    Module->getOrInsertFunction("Add_Temp_String", TypeNone, TypeString);
    Module->getOrInsertFunction("Make_Perm_String", TypeNone, TypeString);
    Module->getOrInsertFunction("Clear_Perm_String", TypeNone, TypeString);
    Module->getOrInsertFunction("Clear_Temp_Strings", TypeNone);
    Module->getOrInsertFunction("asc", TypeInt, TypeString);
    Module->getOrInsertFunction("chrs", TypeString, TypeInt);
    Module->getOrInsertFunction("instr", TypeInt, TypeString, TypeString, TypeInt);
    Module->getOrInsertFunction("lefts", TypeString, TypeString, TypeInt);
    Module->getOrInsertFunction("mids", TypeString, TypeString, TypeInt, TypeInt);
    Module->getOrInsertFunction("rights", TypeString, TypeString, TypeInt);
    Module->getOrInsertFunction("len", TypeInt, TypeString);
    Module->getOrInsertFunction("string_to_int", TypeInt, TypeString);
    Module->getOrInsertFunction("string_to_float", TypeFloat, TypeString);
    Module->getOrInsertFunction("int_to_string", TypeString, TypeInt);
    Module->getOrInsertFunction("float_to_string", TypeString, TypeFloat);
    Module->getOrInsertFunction("int_to_string_with", TypeString, TypeInt, TypeString);
    Module->getOrInsertFunction("float_to_string_with", TypeString, TypeFloat, TypeString);

    if (!options.use_exit_as_end) {
        globals["~QuitRequested"] = new llvm::GlobalVariable(*Module, TypeInt, false,
                                                             llvm::GlobalValue::ExternalLinkage,
                                                             llvm::ConstantInt::get(TypeInt, 0),
                                                             "QuitRequested");
    }
}

void CompilerLLVM::AddOptPasses(llvm::legacy::PassManagerBase &passes, llvm::legacy::FunctionPassManager &fnPasses) {
    llvm::PassManagerBuilder builder;
    if (options.optimise) {
        builder.OptLevel = 3;
    } else {
        builder.OptLevel = 0;
    }
    builder.SizeLevel = 0;
    builder.Inliner = llvm::createFunctionInliningPass(builder.OptLevel, builder.SizeLevel, false);
    if (options.optimise) {
        builder.LoopVectorize = true;
        builder.SLPVectorize = true;
        builder.VerifyInput = true;
    }
    Target->adjustPassManager(builder);
    builder.populateFunctionPassManager(fnPasses);
    builder.populateModulePassManager(passes);
}

void CompilerLLVM::CreateLLVMPasses() {
    llvm::legacy::PassManager passes;
    passes.add(new llvm::TargetLibraryInfoWrapperPass(Target->getTargetTriple()));
    passes.add(llvm::createTargetTransformInfoWrapperPass(Target->getTargetIRAnalysis()));

    llvm::legacy::FunctionPassManager fnPasses(Module.get());
    fnPasses.add(llvm::createTargetTransformInfoWrapperPass(Target->getTargetIRAnalysis()));
    fnPasses.doInitialization();
    AddOptPasses(passes, fnPasses);

    // Optimise functions
    for (llvm::Function &func: *Module) {
        bool changed = fnPasses.run(func);
        if (changed) {
            //std::cout << "Function '" << std::string(func.getName()) << "' optimised\n";
        }
    }

    std::error_code EC;
    llvm::StringRef filename_s(options.output_filename + ".o");
    llvm::raw_fd_ostream out_s(filename_s, EC, llvm::sys::fs::CreationDisposition::CD_CreateAlways);
    if (options.target == CompileTarget::EXE) {
        if (Target->addPassesToEmitFile(passes, out_s, nullptr, llvm::CodeGenFileType::CGFT_ObjectFile)) {
            std::cout << "LLVM output of object files not supported\n";
            exit(1);
        }
    }

    fnPasses.doFinalization();
    passes.run(*Module);
}

llvm::Function *CompilerLLVM::CreateFunc(std::string name, llvm::Type *ret, llvm::ArrayRef<llvm::Type *> parameters) {
    auto func = llvm::Function::Create(llvm::FunctionType::get(ret, parameters, false),
                                       llvm::Function::ExternalLinkage,
                                       name,
                                       Module.get());
    return func;
}

llvm::IRBuilder<> *CompilerLLVM::CreateBuilder(std::string name, llvm::Function *func) {
    auto builder = new llvm::IRBuilder<>(llvm::BasicBlock::Create(Module->getContext(), name, func));
    return builder;
}

void CompilerLLVM::AddTempString(llvm::Value *v, llvm::IRBuilder<> *ir) {
    auto fun = Module->getFunction("Add_Temp_String");
    ir->CreateCall(fun, {v});
}

void CompilerLLVM::MakePermString(llvm::Value *v, llvm::IRBuilder<> *ir) {
    auto fun = Module->getFunction("Make_Perm_String");
    ir->CreateCall(fun, {v});
}

void CompilerLLVM::ClearPermString(llvm::Value *v, llvm::IRBuilder<> *ir) {
    auto fun = Module->getFunction("Clear_Perm_String");
    ir->CreateCall(fun, {v});
}

void CompilerLLVM::ClearTempStrings(llvm::IRBuilder<> *ir) {
    auto fun = Module->getFunction("Clear_Temp_Strings");
    ir->CreateCall(fun, {});
}
