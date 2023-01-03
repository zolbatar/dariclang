#include <iomanip>
#include <iostream>
#include "Engine.h"

extern UISDL *ui;

void World::SetupProjection() {
    float width = ui->GetScreenWidth();
    float height = ui->GetScreenHeight();

    // Projection matrix : 45° Field of View, 4:3 ratio, display range : 0.1 unit <-> 100 units
    Projection = glm::perspective(glm::radians(30.0f), (float) width / (float) height, 0.1f, 1000.0f);
    View = glm::lookAt(cameraPosition, cameraLookAt, cameraRotation);

    // Or, for an ortho camera :
    //Projection = glm::ortho<float>(-1250.0f, 1250.0f, 0.0f, 250.0f, 0.0f, 750.0f); // In world coordinates
    //View = glm::lookAt(cameraPosition, cameraLookAt,  glm::vec3(0, 1, 0));
    //View = glm::lookAt(glm::vec3(0, -1, 1), glm::vec3(cameraLookAt.x + 0.0f, 100.0f, cameraLookAt.z + 0.0), glm::vec3(0, 1, 0));
}

void World::SetupProjectionShadow() {
    glm::vec3 lightInvDir = glm::vec3(0.0f, -1.0f, 0.01f);

    // Compute the MVP matrix from the light's point of view
    Projection = glm::ortho<float>(-(shadow_width / 2), (shadow_width / 2), 0, shadow_depth, (shadow_height / 2), -(shadow_height / 2));
    View = glm::lookAt(lightInvDir, glm::vec3(0, 0, 0), glm::vec3(0, 1, 0));
}

void World::RenderOpenGL3(GLuint shadow_tex_id) {
    // Full screen
    auto w = ui->GetScreenWidth();
    auto h = ui->GetScreenHeight();
    glViewport(0, 0, w, h);

    // Create projection
    if (shadows) {
        SetupProjectionShadow();
        lightPV = Projection * View;
    }
    SetupProjection();

    // Main render
    glUseProgram(programID);

    // Lighting
    glUniform3f(LightDirID, directional.direction.x, directional.direction.y, directional.direction.z);
    glUniform3f(LightColID, directional.colour.x, directional.colour.y, directional.colour.z);
    glUniform3f(AmbientColID, ambient.colour.x, ambient.colour.y, ambient.colour.z);
    glUniform1f(AttConstantID, constant);
    glUniform1f(AttLinearID, linear);
    glUniform1f(AttQuadraticID, quadratic);

    // Clear
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Render
    if (shadows) {
        glUniform1i(ShadowMapID, 0);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, shadow_tex_id);
    } else {
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, 0);
    }
    glUniform1f(ShadowEnabledID, shadows ? 1.0f : 0.0f);
    for (auto object = objects.begin(); object != objects.end(); ++object) {
        SendObject(&object->second, false);
    }
}

void World::RenderOpenGL3Shadow() {
    // Full screen
    glViewport(0, 0, shadow_width * shadow_precision, shadow_depth * shadow_precision);

    // Create projection
    SetupProjectionShadow();
//    SetupProjection();

    // Shadow render first
    glUseProgram(programShadowID);

    // Clear
    glClear(GL_DEPTH_BUFFER_BIT);

    // Render
    for (auto object = objects.begin(); object != objects.end(); ++object) {
        SendObject(&object->second, true);
    }
}

std::string vertexShaderShadow =
        "#version 330 core\n"
        "\n"
        "layout(location = 0) in vec3 vertexPosition_modelspace;\n"
        "\n"
        "// Values that stay constant for the whole mesh.\n"
        "uniform mat4 depthMVP;\n"
        "\n"
        "void main(){\n"
        "   gl_Position =  depthMVP * vec4(vertexPosition_modelspace,1);\n"
        "}";

std::string fragmentShaderShadow =
        "#version 330 core\n"
        "\n"
        "void main(){\n"
        //"gl_FragDepth = 0.0;//gl_FragCoord.z;\n"
        "}";

std::string vertexShader =
        "#version 330 core\n"
        "struct Light\n"
        "{\n"
        "  int type;\n"
        "  float intensity;\n"
        "  vec3 lightDirection;\n"
        "  vec3 lightColour;\n"
        "};\n"
        "layout(location = 0) in vec3 vertexPosition_modelspace;\n"
        "layout(location = 1) in vec3 vertexColor;\n"
        "layout(location = 2) in vec3 normal;\n"
        "uniform mat4 MVP;\n"
        "uniform mat4 depthBiasMVP;\n"
        "uniform vec3 lightDir;\n"
        "out vec4 position;\n"
        "out vec4 ShadowCoord;\n"
        "out vec3 fragmentColor;\n"
        "out vec3 fragmentNormal;\n"
        "out vec3 lightDirection;\n"
        "void main(){\n"
        "	gl_Position = MVP * vec4(vertexPosition_modelspace,1);\n"
        "   ShadowCoord = depthBiasMVP * vec4(vertexPosition_modelspace,1);\n"
        "   position = gl_Position;\n"
        "	fragmentColor = vertexColor;\n"
        "   mat3 normalMatrix = mat3(MVP);\n"
        "   normalMatrix = transpose(inverse(normalMatrix));\n"
        "	fragmentNormal = normalize(normal * normalMatrix);\n"
        "	lightDirection = normalize(lightDir);\n"
        "}";

std::string fragmentShader =
        "#version 330 core\n"
        "in vec4 position;\n"
        "in float height;\n"
        "uniform float shadows;\n"
        "uniform sampler2D shadowMap;"
        "uniform float constant;\n"
        "uniform float linear;\n"
        "uniform float quadratic;\n"
        "uniform vec3 lightCol;\n"
        "uniform vec3 ambientCol;\n"
        "in vec4 ShadowCoord;\n"
        "in vec3 fragmentColor;\n"
        "in vec3 fragmentNormal;\n"
        "in vec3 lightDirection;\n"
        "out vec4 color;\n"
        "\n"
        "float PCF (int kernelSize, vec2 shadowCoord, float depth) {\n"
        "   float size=1.0 / float(textureSize(shadowMap, 0).x);\n"
        "   float shadow = 1.0;\n"
        "   int range = kernelSize /2;\n"
        "   for (int v = -range; v <= range; v++)\n"
        "       for (int u = -range; u <= range; u++)\n"
        "           shadow += (depth >= texture(shadowMap, shadowCoord+size*vec2(u,v)).r) ? 1.0 : 0.0;\n"
        "   return shadow / (kernelSize * kernelSize);\n"
        "}\n"
        "float shadowFactor(vec4 shadowCoord) {\n"
        "    vec4 shadowCoords4 = shadowCoord / shadowCoord.w;\n"
        "    if (shadowCoords4.z > -1.0 && shadowCoords4.z < 1.0) {\n"
        "        float depthBias = -0.001;\n"
        "        float shadowSample = PCF(4, shadowCoords4.xy, shadowCoords4.z + depthBias);\n"
        "        return mix(1.0, 0.3, shadowSample);\n"
        "    }\n"
        "    return 1.0;\n"
        "}\n"
        ""
        "void main(){\n"
        "	float distance = position.z;\n"
        "   float visibility = 1.0;\n"
        "   float bias = 0.0005f;\n"
        "   if (shadows == 1.0f && texture(shadowMap, ShadowCoord.xy).r < ShadowCoord.z - bias){\n"
        "       visibility = 0.3f;\n"
        "   }\n"
        "   visibility = shadowFactor(ShadowCoord);\n"
        "   float attenuation = 1.0f / (constant + linear * distance + quadratic * (distance * distance));\n"
        "   attenuation *= visibility;\n"
        "   float diffuse = max(dot(fragmentNormal, -lightDirection),0.0);\n"
        "   color = vec4((fragmentColor*ambientCol*attenuation)+(fragmentColor*lightCol*diffuse*attenuation),1.0);\n"
        "}";

void World::SetupOpenGL3() {
    LoadShaders(vertexShader, fragmentShader, vertexShaderShadow, fragmentShaderShadow);

    // Alpha
    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // Enable depth test
    glEnable(GL_DEPTH_TEST);

    // Accept fragment if it is closer to the camera than the former one
    glDepthFunc(GL_LESS);

    // Lines
    GLint range[2];
    glGetIntegerv(GL_ALIASED_LINE_WIDTH_RANGE, range);
    //glGetIntegerv(GL_SMOOTH_LINE_WIDTH_RANGE, range);
    glEnable(GL_LINE_WIDTH);
    glLineWidth(1.0f);
}

void World::ShutdownOpenGL3() {
}

void
World::LoadShaders(std::string VertexShaderCode, std::string FragmentShaderCode, std::string VertexShaderShadowCode, std::string FragmentShaderShadowCode) {
    // Create the shaders
    vertexShaderID = glCreateShader(GL_VERTEX_SHADER);
    fragmentShaderID = glCreateShader(GL_FRAGMENT_SHADER);
    vertexShaderShadowID = glCreateShader(GL_VERTEX_SHADER);
    fragmentShaderShadowID = glCreateShader(GL_FRAGMENT_SHADER);

    GLint Result = GL_FALSE;
    int InfoLogLength;

    // Compile Vertex Shader
    std::cout << "Compiling vertex shader\n";
    char const *VertexSourcePointer = VertexShaderCode.c_str();
    glShaderSource(vertexShaderID, 1, &VertexSourcePointer, NULL);
    glCompileShader(vertexShaderID);
    glGetShaderiv(vertexShaderID, GL_COMPILE_STATUS, &Result);
    glGetShaderiv(vertexShaderID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if (InfoLogLength > 0) {
        std::vector<char> VertexShaderErrorMessage(InfoLogLength + 1);
        glGetShaderInfoLog(vertexShaderID, InfoLogLength, NULL, &VertexShaderErrorMessage[0]);
        printf("%s\n", &VertexShaderErrorMessage[0]);
    }

    // Compile Fragment Shader
    std::cout << "Compiling fragment shader\n";
    char const *FragmentSourcePointer = FragmentShaderCode.c_str();
    glShaderSource(fragmentShaderID, 1, &FragmentSourcePointer, NULL);
    glCompileShader(fragmentShaderID);
    glGetShaderiv(fragmentShaderID, GL_COMPILE_STATUS, &Result);
    glGetShaderiv(fragmentShaderID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if (InfoLogLength > 0) {
        std::vector<char> FragmentShaderErrorMessage(InfoLogLength + 1);
        glGetShaderInfoLog(fragmentShaderID, InfoLogLength, NULL, &FragmentShaderErrorMessage[0]);
        printf("%s\n", &FragmentShaderErrorMessage[0]);
    }

    // Compile Vertex Shader (shadow)
    std::cout << "Compiling vertex shader (shadow)\n";
    char const *VertexSourcePointerShadow = VertexShaderShadowCode.c_str();
    glShaderSource(vertexShaderShadowID, 1, &VertexSourcePointerShadow, NULL);
    glCompileShader(vertexShaderShadowID);
    glGetShaderiv(vertexShaderShadowID, GL_COMPILE_STATUS, &Result);
    glGetShaderiv(vertexShaderShadowID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if (InfoLogLength > 0) {
        std::vector<char> VertexShaderErrorMessage(InfoLogLength + 1);
        glGetShaderInfoLog(vertexShaderShadowID, InfoLogLength, NULL, &VertexShaderErrorMessage[0]);
        printf("%s\n", &VertexShaderErrorMessage[0]);
    }

    // Compile Fragment Shader (shadow)
    std::cout << "Compiling fragment shader (shadow)\n";
    char const *FragmentSourcePointerShadow = FragmentShaderShadowCode.c_str();
    glShaderSource(fragmentShaderShadowID, 1, &FragmentSourcePointerShadow, NULL);
    glCompileShader(fragmentShaderShadowID);
    glGetShaderiv(fragmentShaderShadowID, GL_COMPILE_STATUS, &Result);
    glGetShaderiv(fragmentShaderShadowID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if (InfoLogLength > 0) {
        std::vector<char> FragmentShaderErrorMessage(InfoLogLength + 1);
        glGetShaderInfoLog(fragmentShaderShadowID, InfoLogLength, NULL, &FragmentShaderErrorMessage[0]);
        printf("%s\n", &FragmentShaderErrorMessage[0]);
    }

    // Link the program
    std::cout << "Linking program\n";
    programID = glCreateProgram();
    glAttachShader(programID, vertexShaderID);
    glAttachShader(programID, fragmentShaderID);
    glLinkProgram(programID);
    glGetProgramiv(programID, GL_LINK_STATUS, &Result);
    glGetProgramiv(programID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if (InfoLogLength > 0) {
        std::vector<char> ProgramErrorMessage(InfoLogLength + 1);
        glGetProgramInfoLog(programID, InfoLogLength, NULL, &ProgramErrorMessage[0]);
        printf("%s\n", &ProgramErrorMessage[0]);
        exit(0);
    }

    // Link the program
    std::cout << "Linking program (shadow)\n";
    programShadowID = glCreateProgram();
    glAttachShader(programShadowID, vertexShaderShadowID);
    glAttachShader(programShadowID, fragmentShaderShadowID);
    glLinkProgram(programShadowID);
    glGetProgramiv(programShadowID, GL_LINK_STATUS, &Result);
    glGetProgramiv(programShadowID, GL_INFO_LOG_LENGTH, &InfoLogLength);
    if (InfoLogLength > 0) {
        std::vector<char> ProgramErrorMessage(InfoLogLength + 1);
        glGetProgramInfoLog(programShadowID, InfoLogLength, NULL, &ProgramErrorMessage[0]);
        printf("%s\n", &ProgramErrorMessage[0]);
        exit(0);
    }

    glDetachShader(programID, vertexShaderID);
    glDetachShader(programID, fragmentShaderID);
    glDetachShader(programShadowID, vertexShaderShadowID);
    glDetachShader(programShadowID, fragmentShaderShadowID);
    glDeleteShader(vertexShaderID);
    glDeleteShader(fragmentShaderID);
    glDeleteShader(vertexShaderShadowID);
    glDeleteShader(fragmentShaderShadowID);

    // Get a handle for our "MVP" uniform
    // Only during the initialisation
    MatrixID = glGetUniformLocation(programID, "MVP");
    MatrixDepthBiasID = glGetUniformLocation(programID, "depthBiasMVP");
    MatrixShadowID = glGetUniformLocation(programShadowID, "depthMVP");
    ShadowMapID = glGetUniformLocation(programID, "shadowMap");
    ShadowEnabledID = glGetUniformLocation(programID, "shadows");

    // Lights
    LightDirID = glGetUniformLocation(programID, "lightDir");
    LightColID = glGetUniformLocation(programID, "lightCol");
    AmbientColID = glGetUniformLocation(programID, "ambientCol");
    AttConstantID = glGetUniformLocation(programID, "constant");
    AttLinearID = glGetUniformLocation(programID, "linear");
    AttQuadraticID = glGetUniformLocation(programID, "quadratic");
}
