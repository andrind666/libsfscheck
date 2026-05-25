#include "ram_detector.h"
#include "utils.h"
#include <sstream>

long RAMDetector::getTotalRAM() {
    std::string meminfo = readFile("/proc/meminfo");
    std::istringstream iss(meminfo);
    std::string line;

    while (getline(iss, line)) {
        if (line.find("MemTotal") != std::string::npos) {
            return atol(line.c_str()) / 1024;
        }
    }

    return 0;
}

bool RAMDetector::isFakeRAM(long claimedRamMB) {
    return claimedRamMB > getTotalRAM() + 1024;
}
