map<char, int> result;
    map<char, int> count;
    
    for (char c : test) {
        if (isalpha(c)) {
            count[c]++;
        }
    }
    
    int maxCount = 0;
    for (const auto& pair : count) {
        maxCount = max(maxCount, pair.second);
    }
    
    for (const auto& pair : count) {
        if (pair.second == maxCount) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}