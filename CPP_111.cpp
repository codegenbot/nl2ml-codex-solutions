#include <map>
#include <sstream>

bool issame(map<char, int> a, map<char, int> b){
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> result;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto &entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    
    map<char, int> maxChars;
    for (const auto &entry : result) {
        if (entry.second == maxCount) {
            maxChars[entry.first] = entry.second;
        }
    }
    
    return maxChars;
}