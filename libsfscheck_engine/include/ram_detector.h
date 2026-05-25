#ifndef RAM_DETECTOR_H
#define RAM_DETECTOR_H

#include <string>

class RAMDetector {
public:
long getTotalRAM();
bool isFakeRAM(long claimedRamMB);
};

#endif
