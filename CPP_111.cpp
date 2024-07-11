#include <iostream>
#include <sstream>
#include <map>
#include <cassert>

bool issame(const std::map<char, int>& a, const std::map<char, int>& b){
    return a == b;
}

std::map<char, int> histogram(const std::string& test) {
    std::map<char, int> result;
    for (char c : test) {
        result[c]++;
    }
    
    int maxCount = 0;
    for (const auto& entry : result) {
        maxCount = std::max(maxCount, entry.second);
    }
    
    std::map<char, int> mostRepeatedChars;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            mostRepeatedChars[entry.first] = entry.second;
        }
    }
    
    return mostRepeatedChars;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    return 0;
}