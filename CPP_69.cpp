int search(int n) {
    map<int, int> freq;
    vector<int> lst;
    
    for (int i = 1; i <= n; i++) {
        if (rand() % 2) {
            lst.push_back(i);
        }
    }
    
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }

    int result = -1;
    for (auto p : freq) {
        if (p.second >= p.first && p.first > 0) {
            result = p.first;
            break;
        }
    }

    return result;
}