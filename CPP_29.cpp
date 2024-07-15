#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return std::vector<std::string>(a.begin(), a.end()) == std::vector<std::string>(b.begin(), b.end());
}

std::vector<std::string> filter_by_prefix(const std::vector<std::string> &strings, const std::string &prefix){
    std::vector<std::string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}