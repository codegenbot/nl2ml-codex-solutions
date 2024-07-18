#include <iostream>
#include <map>
#include <algorithm>
#include <string>

using namespace std;

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (const std::pair<const char, int>& pair : count) {
        maxCount = std::max(maxCount, pair.second);
    }

    for (const std::pair<const char, int>& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }

    return result;
}