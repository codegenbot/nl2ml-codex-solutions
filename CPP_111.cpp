map<char, int> histogram(string test) {
    map<char, int> result;
    map<char, int> freq;
    int maxFreq = 0;

    for (char c : test) {
        if (c != ' ') {
            freq[c]++;
            maxFreq = max(maxFreq, freq[c]);
        }
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second == maxFreq) {
            result[it->first] = it->second;
        }
    }

    return result;
}