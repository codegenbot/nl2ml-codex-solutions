```cpp
#include <vector>
#include <map>
#include <cassert>

int findMaxFreq(std::vector<int> lst) {
    std::map<int, int> freqMap;
    for (int num : lst) {
        if (freqMap.find(num) == freqMap.end()) {
            freqMap[num] = 1;
        } else {
            freqMap[num]++;
        }
    }

    int maxFreqNum = -1;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        if (it->second > 0 && (maxFreqNum == -1 || it->second > maxFreqNum)) {
            maxFreqNum = it->second;
        }
    }

    return maxFreqNum;
}

int main() {
    assert(findMaxFreq({3, 10, 10, 9, 2}) == -1);
    return 0;
}