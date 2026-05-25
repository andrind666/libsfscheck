#include "root_detector.h"
#include <unistd.h>

bool RootDetector::isRooted() {
    if (access("/system/xbin/su", F_OK) == 0)
        return true;

    if (access("/system/bin/su", F_OK) == 0)
        return true;

    return false;
}
