#include "refurbish_detector.h"
#include "battery_detector.h"

bool RefurbishDetector::isRefurbished() {
    BatteryDetector battery;
    return battery.getCycleCount() > 500;
}
