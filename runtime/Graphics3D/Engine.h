#pragma once

#include <cmath>
#include <map>
#include <memory>
#include <vector>
#include <list>
#include <glm/gtc/matrix_transform.hpp>
#include "../UI/UISDL.h"

struct PosColorVertex {
    glm::vec3 position;
    glm::vec3 normal;
    ImU32 colour;
};

struct MeshTriangle {
    uint32_t vertex1;
    uint32_t vertex2;
    uint32_t vertex3;
    glm::vec3 normal;
    ImU32 colour;
    bool solid;
};

class Light {
public:
    glm::vec3 direction;
    glm::vec3 colour;
};

enum class RenderType {
    Solid,
    Wireframe,
};

class ShapeSection {
public:
    ~ShapeSection();

    void CreateNormals();
    void CreateOpenGL3Vertex(PosColorVertex *v, bool solid, ImVec4 &tc);

    void MoveInVerticesAndFaces(std::vector<PosColorVertex> *vertices_in, std::vector<MeshTriangle> *faces_in);

    size_t BuildOpenGL();

    void BuildOpenGLObjects();

    void ThrowAtGPU(RenderType render_type);

    void AddVertex(PosColorVertex pcv) { vertices.push_back(std::move(pcv)); }

    void AddTri(MeshTriangle tri) { triangles.push_back(std::move(tri)); }

private:
    ImVec4 ColorConvertU32ToFloat4(ImU32 in);

    void BindSet();

    std::vector<PosColorVertex> vertices;
    std::vector<MeshTriangle> triangles;

    // Actual vertices etc.
    std::vector<glm::vec3> verticesCoord;
    std::vector<glm::vec3> verticesColour;
    std::vector<glm::vec3> verticesNormals;

    size_t sz = 0;
    GLuint VertexArrayID[1];
    GLuint vertexbuffer;
    GLuint colorbuffer;
    GLuint normalbuffer;
};

class Shape {
public:
    void Create();

    ShapeSection *CreateShapeSection();

    void BuildOpenGLObjects();

    void ThrowAtGPU(RenderType render_type);

private:
    std::list<ShapeSection> sections;
    bool built = false;
};

class Object {
public:
    size_t shape_index;
    glm::vec3 position = glm::vec3(0.0f);
    glm::vec3 rotation = glm::vec3(0.0f);
    float scale = 1.0f;
    RenderType render_type = RenderType::Solid;
};

class World {
public:
    World(int screen_width, int screen_height) {
        SetScreenSize(screen_width, screen_height);
    }

    void Clear();

    size_t AddShape(Shape s);

    size_t CreateShape();

    void DeleteShape(size_t index);

    size_t
    CreateObject(size_t index, float x, float y, float z, float rx, float ry, float rz, float scale, int render_type);

    void Render();

    void Camera(float x, float y, float z, float rx, float ry, float rz, float lx, float ly, float lz);

    void ObjectTranslate(size_t index, float x, float y, float z);

    void ObjectRotate(size_t index, float x, float y, float z);

    void ObjectScale(size_t index, float scale);

    void ObjectDelete(size_t index);

    void ObjectDeleteAll();

    void CreateShape(Shape *shape);

    void RenderOpenGL3(GLuint shadow_tex_id);

    void RenderOpenGL3Shadow();

    void SetAmbient(double r, double g, double b);

    void SetDirectional(double x, double y, double z, double r, double g, double b, double c, double l, double q);

    void SetupOpenGL3();

    void Cleanup();

    void ShutdownOpenGL3();

    void SetupProjection();

    void SetupProjectionShadow();

    void LoadShaders(std::string VertexShaderCode, std::string FragmentShaderCode, std::string VertexShaderShadowCode,
                     std::string FragmentShaderShadowCode);

    size_t
    OpenGLColour(GLuint *VertexArrayID, GLuint *vertexbuffer, GLuint *normalbuffer, GLuint *colorbuffer, bool back,
                 Object *object);

    void SendObject(Object *object, bool shadow);

    void SetScreenSize(int screen_width, int screen_height) {
        x_origin = screen_width / 2;
        y_origin = screen_height / 2;
    }

    float shadow_width = 1000.0f;
    float shadow_depth = 1000.0f;
    float shadow_height = 1000.0f;
    float shadow_precision = 8.0f;
    bool shadows = false;

private:
    std::map<size_t, Shape> shapes;
    std::map<size_t, Object> objects;
    std::list<size_t> objects_to_delete;
    size_t object_index = 0;
    size_t shape_index = 0;

    // OpenGL3
    glm::mat4 lightPV;
    GLuint MatrixID;
    GLuint MatrixDepthBiasID;
    GLuint MatrixShadowID;
    glm::mat4 Projection;
    glm::mat4 View;
    GLuint vertexShaderID;
    GLuint ShadowMapID;
    GLuint fragmentShaderID;
    GLuint vertexShaderShadowID;
    GLuint fragmentShaderShadowID;
    GLuint programID;
    GLuint programShadowID;
    GLuint ShadowEnabledID;
    GLuint LightDirID;
    GLuint LightColID;
    GLuint AmbientColID;
    GLuint AttConstantID;
    GLuint AttLinearID;
    GLuint AttQuadraticID;

    // World
    int x_origin, y_origin;
    Light ambient{glm::vec3(0, 0, 0), glm::vec3(0.25, 0.25, 0.25)};
    Light directional{glm::vec3(0, 0.5, 0.5), glm::vec3(1.0, 1.0, 1.0)};
    glm::vec3 cameraPosition = glm::vec3(0, 5, -10);
    glm::vec3 cameraLookAt = glm::vec3(0, 0, 0);
    glm::vec3 cameraRotation = glm::vec3(0, 1, 0);
    float constant = 1.0f;
    float linear = 0.0f; // // 0.0014f
    float quadratic = 0.0f; // 0.000007f;
};

