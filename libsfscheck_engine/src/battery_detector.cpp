#include "battery_detector.h"
#include "utils.h"

std::string BatteryDetector::getBatteryHealth() {
    return readFile("/sys/class/power_supply/battery/health");
}

int BatteryDetector::getCycleCount() {
    std::string cycle =
            readFile("/sys/class/power_supply/battery/cycle_count");

    return atoi(cycle.c_str());
}
