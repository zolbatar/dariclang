#include <iomanip>
#include <iostream>
#include "Engine.h"

ShapeSection::~ShapeSection() {
    if (sz > 0) {
//        std::cout << "Deletion:" << sz << "\n";
        glDeleteBuffers(1, &normalbuffer);
        glDeleteBuffers(1, &colorbuffer);
        glDeleteBuffers(1, &vertexbuffer);
        glDeleteVertexArrays(1, VertexArrayID);
    }
}

void ShapeSection::BuildOpenGLObjects() {
//    auto t1 = std::chrono::steady_clock::now();
    sz = BuildOpenGL();
/*    auto t2 = std::chrono::steady_clock::now();
    auto time_span = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1);
    std::cout << "OpenGL shape section creation took " << time_span.count() << " microseconds" << std::endl;*/
}

void ShapeSection::ThrowAtGPU(RenderType render_type) {
    BindSet();
    switch (render_type) {
        case RenderType::Solid: {
            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
            glDrawArrays(GL_TRIANGLES, 0, sz); // Starting from vertex 0; 3 vertices total -> 1 triangle
            break;
        }
        case RenderType::Wireframe: {
            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
            glDrawArrays(GL_TRIANGLES, 0, sz); // Starting from vertex 0; 3 vertices total -> 1 triangle
            break;
        }
    }
}

glm::vec3 TriangleNormal(glm::vec3 *v1, glm::vec3 *v2, glm::vec3 *v3) {
    return glm::vec3(
            (v2->y - v1->y) * (v3->z - v1->z) - (v2->z - v1->z) * (v3->y - v1->y),
            (v2->z - v1->z) * (v3->x - v1->x) - (v2->x - v1->x) * (v3->z - v1->z),
            (v2->x - v1->x) * (v3->y - v1->y) - (v2->y - v1->y) * (v3->x - v1->x));
}

void ShapeSection::CreateNormals() {
    // Reset vertex normals
    for (auto vertex = vertices.begin(); vertex != vertices.end(); ++vertex) {
        vertex->normal.x = 0;
        vertex->normal.y = 0;
        vertex->normal.z = 0;
    }

    // Face normals
    for (auto triangle = triangles.begin(); triangle != triangles.end(); ++triangle) {
        auto v1 = &vertices[triangle->vertex1].position;
        auto v2 = &vertices[triangle->vertex2].position;
        auto v3 = &vertices[triangle->vertex3].position;
        triangle->normal = TriangleNormal(v1, v2, v3);

        // Add normals to each vertex
        vertices[triangle->vertex1].normal.x += triangle->normal.x;
        vertices[triangle->vertex2].normal.x += triangle->normal.x;
        vertices[triangle->vertex3].normal.x += triangle->normal.x;
        vertices[triangle->vertex1].normal.y += triangle->normal.y;
        vertices[triangle->vertex2].normal.y += triangle->normal.y;
        vertices[triangle->vertex3].normal.y += triangle->normal.y;
        vertices[triangle->vertex1].normal.z += triangle->normal.z;
        vertices[triangle->vertex2].normal.z += triangle->normal.z;
        vertices[triangle->vertex3].normal.z += triangle->normal.z;
    }
}

void ShapeSection::CreateOpenGL3Vertex(PosColorVertex *v, bool solid, ImVec4 &tc) {
    glm::vec3 ve1(v->position.x, v->position.y, v->position.z);
    verticesCoord.push_back(std::move(ve1));

    // Colours
    auto vcc1 = solid ? tc : ColorConvertU32ToFloat4(v->colour);
    glm::vec3 vc1(
            vcc1.x,
            vcc1.y,
            vcc1.z);
    verticesColour.push_back(std::move(vc1));

    // Normal
    glm::vec3 vn1(v->normal.x, v->normal.y, v->normal.z);
    verticesNormals.push_back(std::move(vn1));
}

void
ShapeSection::MoveInVerticesAndFaces(std::vector<PosColorVertex> *vertices_in, std::vector<MeshTriangle> *faces_in) {
    vertices.swap(*vertices_in);
    triangles.swap(*faces_in);
}

ImVec4 ShapeSection::ColorConvertU32ToFloat4(ImU32 in) {
    float s = 1.0f / 255.0f;
    return ImVec4(
            ((in >> IM_COL32_B_SHIFT) & 0xFF) * s,
            ((in >> IM_COL32_G_SHIFT) & 0xFF) * s,
            ((in >> IM_COL32_R_SHIFT) & 0xFF) * s,
            ((in >> IM_COL32_A_SHIFT) & 0xFF) * s);
}

size_t ShapeSection::BuildOpenGL() {
    // Build OpenGL stuff
    for (auto t = triangles.begin(); t != triangles.end(); ++t) {
        auto v1 = &vertices[t->vertex1];
        auto v2 = &vertices[t->vertex2];
        auto v3 = &vertices[t->vertex3];
        auto tc = ColorConvertU32ToFloat4(t->colour);
        auto solid = t->solid;
        CreateOpenGL3Vertex(v1, solid, tc);
        CreateOpenGL3Vertex(v2, solid, tc);
        CreateOpenGL3Vertex(v3, solid, tc);
    }

    // Create everything
    glGenVertexArrays(1, VertexArrayID);
    glBindVertexArray(VertexArrayID[0]);

    // Vertex data
    glGenBuffers(1, &vertexbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    auto ss = verticesCoord.size();
    auto siz = ss * sizeof(glm::vec3);
    glBufferData(GL_ARRAY_BUFFER, siz, verticesCoord.data(), GL_STATIC_DRAW);

    // Colour data
    glGenBuffers(1, &colorbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
    siz = ss * sizeof(glm::vec3);
    glBufferData(GL_ARRAY_BUFFER, siz, verticesColour.data(), GL_STATIC_DRAW);

    // Normals data
    glGenBuffers(1, &normalbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, normalbuffer);
    siz = ss * sizeof(glm::vec3);
    glBufferData(GL_ARRAY_BUFFER, siz, verticesNormals.data(), GL_STATIC_DRAW);

    return ss;
}

void ShapeSection::BindSet() {
    // Render
    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    glVertexAttribPointer(
            0,                           // attribute 0. No particular reason for 0, but must match the layout in the shader.
            3,                           // size
            GL_FLOAT,                    // type
            GL_FALSE,                    // normalized?
            0,                           // stride
            (void *) 0                     // array buffer offset
    );

    // 2nd attribute buffer : colors
    glEnableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, colorbuffer);
    glVertexAttribPointer(
            1,                                // attribute. No particular reason for 1, but must match the layout in the shader.
            3,                                // size
            GL_FLOAT,                         // type
            GL_FALSE,                         // normalized?
            0,                                // stride
            (void *) 0                          // array buffer offset
    );

    // 3rd attribute buffer : normals
    glEnableVertexAttribArray(2);
    glBindBuffer(GL_ARRAY_BUFFER, normalbuffer);
    glVertexAttribPointer(
            2,                                // attribute
            3,                                // size
            GL_FLOAT,                         // type
            GL_FALSE,                         // normalized?
            0,                                // stride
            (void *) 0                          // array buffer offset
    );
}

