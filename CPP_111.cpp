map<char, int> histogram(string test) {
    map<char, int> freq;
    stringstream ss(test);
    string word;
    while (ss >> word) {
        for (char c : word) {
            freq[c]++;
        }
    }
    
    map<char, int> result;
    int maxFreq = 0;
    for (const auto& pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            result.clear();
            result[pair.first] = pair.second;
        } else if (pair.second == maxFreq) {
            result[pair.first] = pair.second;
        }
    }
    
    return result;
}