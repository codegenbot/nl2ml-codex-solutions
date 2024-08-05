int search(const std::vector<int>& lst) {
    int maxFreq = -1;
    for (int num : lst) {
        int freq = std::count(lst.begin(), lst.end(), num);
        if (num > freq && freq > maxFreq) {
            maxFreq = freq;
        }
    }
    return maxFreq > 0 ? maxFreq : -1;
}