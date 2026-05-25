#include <vector>

int memoryBenchmark() {

    std::vector<int> data(10000000);

    for (int i = 0; i < data.size(); i++)
        data[i] = i;

    return data.size();
}
