#include "utils.h"
#include <fstream>
#include <sstream>

std::string readFile(const std::string &path) {
    std::ifstream file(path);
    if (!file.is_open()) return "";

    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

std::string trim(const std::string &str) {
    size_t first = str.find_first_not_of(" \n\r\t");
    size_t last  = str.find_last_not_of(" \n\r\t");

    if (first == std::string::npos) return "";

    return str.substr(first, last - first + 1);
}

std::vector<std::string> split(const std::string &s, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(s);
    std::string item;

    while (getline(ss, item, delimiter)) {
        tokens.push_back(item);
    }

    return tokens;
}
