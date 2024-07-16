map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> freq;
    
    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
        }
    }
    
    int maxFreq = 0;
    for (auto it : freq) {
        maxFreq = max(maxFreq, it.second);
    }
    
    for (auto it : freq) {
        if (it.second == maxFreq) {
            result[it.first] = it.second;
        }
    }
    
    return result;
}