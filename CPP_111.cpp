#include <iostream>
#include <map>
#include <sstream>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string test);

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::map<char, int> result = histogram(input);
    for (const auto& entry : result) {
        std::cout << entry.first << ": " << entry.second << std::endl;
    }
    return 0;
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = std::max(maxCount, entry.second);
    }
    std::map<char, int> resultMap;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            resultMap[entry.first] = entry.second;
        }
    }
    return resultMap;
}