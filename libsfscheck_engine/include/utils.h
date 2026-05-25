#ifndef SFS_UTILS_H
#define SFS_UTILS_H

#include <string>
#include <vector>

std::string readFile(const std::string &path);
std::string trim(const std::string &str);
std::vector<std::string> split(const std::string &s, char delimiter);

#endif
