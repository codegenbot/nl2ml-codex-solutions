#include <iostream>
#include <sstream>
#include <unordered_map>
#include <cassert>

using namespace std;

bool issame(unordered_map<char, int> a, unordered_map<char, int> b);

unordered_map<char, int> histogram(string test);

bool issame(unordered_map<char, int> a, unordered_map<char, int> b) {
    return a == b;
}

unordered_map<char, int> histogram(string test) {
    unordered_map<char, int> result;
    istringstream iss(test);
    string word;
    while (iss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    int maxCount = 0;
    for (const auto &entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    unordered_map<char, int> maxCountChars;
    for (const auto &entry : result) {
        if (entry.second == maxCount) {
            maxCountChars[entry.first] = entry.second;
        }
    }
    return maxCountChars;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
}