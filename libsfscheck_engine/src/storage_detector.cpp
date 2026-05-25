#include "storage_detector.h"
#include <sys/statfs.h>
#include <fstream>

long long StorageDetector::getStorageGB(const char *path) {
    struct statfs stat{};
    statfs(path, &stat);

    long long total =
            (long long) stat.f_blocks * stat.f_bsize;

    return total / (1024LL * 1024LL * 1024LL);
}

bool StorageDetector::fakeStorageTest(const char *path) {
    std::ofstream file(std::string(path) + "/sfs_test.bin");

    if (!file.is_open())
        return true;

    file << "SFS CHECK";
    file.close();

    return false;
}
