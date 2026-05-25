#ifndef GPU_DETECTOR_H
#define GPU_DETECTOR_H

#include <string>

class GPUDetector {
public:
std::string getRenderer();
bool isFakeGPU();
};

#endif
