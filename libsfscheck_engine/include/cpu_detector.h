#ifndef CPU_DETECTOR_H
#define CPU_DETECTOR_H

#include <string>

class CPUDetector {
public:
std::string getCPUInfo();
bool detectFakeCPU();
};

#endif
