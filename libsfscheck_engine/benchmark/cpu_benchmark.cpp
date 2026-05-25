#include <chrono>

int cpuBenchmark() {
    auto start = std::chrono::high_resolution_clock::now();

    volatile long x = 0;

    for (long i = 0; i < 100000000; i++)
        x += i;

    auto end = std::chrono::high_resolution_clock::now();

    return (int)
        std::chrono::duration_cast<std::chrono::milliseconds>(
            end - start).count();
}
