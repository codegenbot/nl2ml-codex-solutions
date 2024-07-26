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
    for (const auto& entry : result) {
        maxCount = max(maxCount, entry.second);
    }
    
    map<char, int> maxOccurrences;
    for (const auto& entry : result) {
        if (entry.second == maxCount) {
            maxOccurrences[entry.first] = entry.second;
        }
    }
    
    return maxOccurrences;
}