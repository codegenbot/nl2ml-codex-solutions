#include <iostream>
#include <map>
#include <sstream>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b) { 
    return a == b; 
}

std::map<char, int> histogram(std::string test);

int main() {
    std::string test = "hello world";
    std::map<char, int> result = histogram(test);
    std::map<char, int> expected = {{'l', 3}};
    assert(issame(result, expected));

    return 0;
}

std::map<char, int> histogram(std::string test){
    std::map<char, int> result;
    std::istringstream iss(test);
    std::string word;
    while (iss >> word) {
        for (char& c : word) {
            result[c]++;
        }
    }

    int maxCount = 0;
    for (const auto& pair : result) {
        maxCount = std::max(maxCount, pair.second);
    }

    std::map<char, int> maxChars;
    for (const auto& pair : result) {
        if (pair.second == maxCount) {
            maxChars[pair.first] = pair.second;
        }
    }

    return maxChars;
}