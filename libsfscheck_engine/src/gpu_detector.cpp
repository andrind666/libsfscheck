#include "gpu_detector.h"
#include <GLES3/gl3.h>

std::string GPUDetector::getRenderer() {
    const GLubyte *renderer = glGetString(GL_RENDERER);

    if (!renderer)
        return "Unknown";

    return (const char*) renderer;
}

bool GPUDetector::isFakeGPU() {
    return false;
}
