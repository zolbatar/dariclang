#include <iomanip>
#include <iostream>
#include "Engine.h"

extern UISDL *ui;

static glm::mat4 biasMatrix(
        0.5, 0.0, 0.0, 0.0,
        0.0, 0.5, 0.0, 0.0,
        0.0, 0.0, 0.5, 0.0,
        0.5, 0.5, 0.5, 1.0
);

void World::SendObject(Object *object, bool shadow) {
    auto shape = &shapes[object->shape_index];
    shape->BuildOpenGLObjects();

    // Transform
    auto ModelTranslate = glm::translate(glm::mat4(1.0f), object->position);
    auto ModelRotateX = glm::rotate(ModelTranslate, object->rotation.x, glm::vec3(-1.0f, 0.0f, 0.0f));
    auto ModelRotateY = glm::rotate(ModelRotateX, object->rotation.y, glm::vec3(0.0f, -1.0f, 0.0f));
    auto ModelRotateZ = glm::rotate(ModelRotateY, object->rotation.z, glm::vec3(0.0f, 0.0f, -1.0f));
    auto modelScale = glm::scale(ModelRotateZ, glm::vec3(object->scale, object->scale, object->scale));
    glm::mat4 Model = modelScale;

    // Our ModelViewProjection : multiplication of our 3 matrices
    glm::mat4 mvp = Projection * View * Model; // Remember, matrix multiplication is the other way around

    // To adjust depth stuff
    if (!shadow) {
        // Send our transformation to the currently bound shader, in the "MVP" uniform
        // This is done in the main loop since each model will have a different MVP matrix (At least for the M part)
        glUniformMatrix4fv(MatrixID, 1, GL_FALSE, &mvp[0][0]);

        if (shadows) {
            glm::mat4 depthBiasMVP = biasMatrix * lightPV * Model;
            glUniformMatrix4fv(MatrixDepthBiasID, 1, GL_FALSE, &depthBiasMVP[0][0]);
        }
    } else {
        glUniformMatrix4fv(MatrixShadowID, 1, GL_FALSE, &mvp[0][0]);
    }

    // Throw the cached triangles etc. at the GPU
    shape->ThrowAtGPU(object->render_type);
}

