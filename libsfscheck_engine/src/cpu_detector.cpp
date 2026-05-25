#include "cpu_detector.h"
#include "utils.h"

std::string CPUDetector::getCPUInfo() {
    return readFile("/proc/cpuinfo");
}

bool CPUDetector::detectFakeCPU() {
    std::string cpu = getCPUInfo();
    return cpu.find("MT6580") != std::string::npos;
}
