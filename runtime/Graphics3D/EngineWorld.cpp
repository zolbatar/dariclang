#include <algorithm>
#include <string>
#include <random>
#include <chrono>
#include "Engine.h"

constexpr float toRad(float v) { return (v / 180.0 * M_PI); }

extern UISDL *ui;
World world(0, 0);
extern std::vector<PosColorVertex> vertices;
extern std::vector<MeshTriangle> faces;

void World::Clear() {
    shapes.clear();
    objects.clear();
}

size_t World::AddShape(Shape s) {
    shapes.insert(std::make_pair(shape_index++, std::move(s)));
    return shape_index - 1;
}

size_t World::CreateShape() {
    //auto t1 = std::chrono::steady_clock::now();
    Shape shape;

    // Add
    auto ss = shape.CreateShapeSection();
    ss->MoveInVerticesAndFaces(&vertices, &faces);
    ss->CreateNormals();

    shapes.insert(std::make_pair(shape_index++, std::move(shape)));
    //auto t2 = std::chrono::steady_clock::now();
    //auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1);
    //std::cout << "Shape creation took " << time_span.count() << " microseconds" << std::endl;
    return shape_index - 1;
}

void World::DeleteShape(size_t index) {
    if (shapes.count(index) == 0) {
        std::string s = "Can't find 3D shape: " + std::to_string(index) + "\n";
        throw std::runtime_error(s);
    }
    objects_to_delete.push_back(index);
}

size_t World::CreateObject(size_t index, float x, float y, float z, float rx, float ry, float rz, float scale, int render_type) {
    Object o;
    o.shape_index = index;
    o.position.x = x;
    o.position.y = y;
    o.position.z = z;
    o.rotation.x = toRad(rx);
    o.rotation.y = toRad(ry);
    o.rotation.z = toRad(rz);
    o.scale = scale;
    switch (render_type) {
        case 0:
            o.render_type = RenderType::Solid;
            break;
        case 1:
            o.render_type = RenderType::Wireframe;
            break;
    };
    objects.insert(std::make_pair(object_index++, std::move(o)));
    return object_index - 1;
}

void World::ObjectTranslate(size_t index, float x, float y, float z) {
    if (objects.count(index) == 0) {
        std::string s = "Can't find 3D object: " + std::to_string(index) + "\n";
        throw std::runtime_error(s);
    }
    auto object = &(*objects.find(index)).second;
    object->position.x = x;
    object->position.y = y;
    object->position.z = z;
}

void World::ObjectRotate(size_t index, float x, float y, float z) {
    if (objects.count(index) == 0) {
        std::string s = "Can't find 3D object: " + std::to_string(index) + "\n";
        throw std::runtime_error(s);
    }
    auto object = &(*objects.find(index)).second;
    object->rotation.x = toRad(x);
    object->rotation.y = toRad(y);
    object->rotation.z = toRad(z);
}

void World::ObjectDeleteAll() {
    objects.clear();
}

void World::ObjectDelete(size_t index) {
    if (objects.count(index) == 0) {
        std::string s = "Can't find 3D object: " + std::to_string(index) + "\n";
        throw std::runtime_error(s);
    }
    auto object = objects.find(index);
    objects.erase(object);
//    std::cout << "3D objects remaining: " << objects.size() << std::endl;
}

void World::ObjectScale(size_t index, float scale) {
    if (objects.count(index) == 0) {
        std::string s = "Can't find 3D object: " + std::to_string(index) + "\n";
        throw std::runtime_error(s);
    }
    auto object = &(*objects.find(index)).second;
    object->scale = scale;
}

void World::Camera(float x, float y, float z, float rx, float ry, float rz, float lx, float ly, float lz) {
    cameraPosition.x = x;
    cameraPosition.y = y;
    cameraPosition.z = z;
    cameraRotation.x = rx;
    cameraRotation.y = ry;
    cameraRotation.z = rz;
    cameraLookAt.x = lx;
    cameraLookAt.y = ly;
    cameraLookAt.z = lz;
}

void World::Render() {
    ui->Render3D();
}

void World::Cleanup() {
    for (auto i: objects_to_delete) {
        shapes.erase(i);
    }
    objects_to_delete.clear();
}

void World::SetAmbient(double r, double g, double b) {
    this->ambient.colour = glm::vec3(r, g, b);
}

void World::SetDirectional(double x, double y, double z, double r, double g, double b, double c, double l, double q) {
    this->directional.direction = glm::vec3(x, y, z);
    this->directional.colour = glm::vec3(r, g, b);
    this->constant = c;
    this->linear = l;
    this->quadratic = q;
}
