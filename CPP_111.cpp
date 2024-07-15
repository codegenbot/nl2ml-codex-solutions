#include <map>

map<char, int> histogram(string test);
bool issame(map<char, int> a, map<char, int> b);

bool issame(map<char, int> a, map<char, int> b) {
    return a == b;
}

map<char, int> histogram(string test) {
    map<char, int> counts;
    for (char c : test) {
        if (c != ' ') {
            counts[c]++;
        }
    }
    
    map<char, int> result;
    int maxCount = 0;
    for (const auto& pair : counts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}