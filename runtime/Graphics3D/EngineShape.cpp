#include <iomanip>
#include <iostream>
#include "Engine.h"

ShapeSection *Shape::CreateShapeSection() {
    sections.emplace_back();
    return &sections.back();
}

void Shape::BuildOpenGLObjects() {
    if (built)
        return;
    for (auto &s: sections) {
        s.BuildOpenGLObjects();
    }
    built = true;
}

void Shape::ThrowAtGPU(RenderType render_type) {
    for (auto &shape: sections) {
        shape.ThrowAtGPU(render_type);
    }
}

