#pragma once

#include "TypeSignature.h"
#include "TypeRecord.h"

class TypeRecordArray : public TypeRecord {
public:
	TypeRecordArray(SourceFileData &state,
					std::string name,
					std::string struct_name,
					const std::list<ParserToken> &expressions,
					Scope scope);
	static std::shared_ptr<TypeSignature> Create(SourceFileData &state,
												 Scope scope,
												 const std::string &name,
												 std::string struct_name,
												 const std::list<ParserToken> &expressions);
	std::shared_ptr<TypeSignature> CreateLink(SourceFileData &state,
											  std::string field);
	bool operator==(TypeSignature &other) override;
	void GarbageCollect(SignatureCall &call) override;
	bool Matches(const std::string &struct_name, std::list<ParserToken> &expressions);
	bool Matches(std::list<ParserToken> &expressions);
	void Create(SignatureCall &call) override;
	ValueType Get(SignatureCall &call) override;
	llvm::Type *GetLLVMType(bool is_ref, SignatureCall &call) override;
	void Set(SignatureCall &call, ValueType value) override;
	static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindRecordArray(
		const std::string &name,
		const std::string &struct_name,
		std::list<ParserToken> &expressions);
	static std::tuple<FindResult, std::shared_ptr<TypeSignature>> FindRecordArray(
		const std::string &name,
		std::list<ParserToken> &expressions);
	void CreateLocalDimensions(SignatureCall &call, llvm::StructType *type2);
	void CreateGlobalDimensions(SignatureCall &call, llvm::StructType *type2);
};