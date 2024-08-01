Here is the completed code:

int search(vector<int> lst) {
    map<int, int> freqMap;
    for (int num : lst) {
        if (!freqMap.count(num)) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }

    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            return it->first;
        }
    }

    return -1;
}