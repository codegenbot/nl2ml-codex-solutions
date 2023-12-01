#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // Code for checking if two vectors are the same
    // ...
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));

    return 0;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (std::string s : strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}