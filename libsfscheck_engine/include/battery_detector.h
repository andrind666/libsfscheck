#ifndef BATTERY_DETECTOR_H
#define BATTERY_DETECTOR_H

#include <string>

class BatteryDetector {
public:
std::string getBatteryHealth();
int getCycleCount();
};

#endif
