#include <vector>
#include <map>

int search(std::vector<int> lst) {
    std::map<int, int> freq;
    for (int num : lst) {
        if (freq.find(num) == freq.end()) {
            freq[num] = 1;
        } else {
            freq[num]++;
        }
    }
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second >= it->first && it->first > 0) {
            return it->first;
        }
    }
    return -1;