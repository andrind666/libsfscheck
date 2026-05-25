#ifndef STORAGE_DETECTOR_H
#define STORAGE_DETECTOR_H

#include <string>

class StorageDetector {
public:
long long getStorageGB(const char *path);
bool fakeStorageTest(const char *path);
};

#endif
