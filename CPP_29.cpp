#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string &a, const std::string &b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto &str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Your main function code here
    return 0;
}