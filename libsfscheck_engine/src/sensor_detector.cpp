#include "sensor_detector.h"
#include <dirent.h>

int SensorDetector::countSensors() {
    DIR *dir = opendir("/sys/class/sensors");

    if (!dir)
        return 0;

    int count = 0;

    while (readdir(dir))
        count++;

    closedir(dir);

    return count;
}
