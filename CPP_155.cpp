#include <vector>
#include <cassert>

std::vector<int> counts(std::vector<int> b, int num) {
    std::vector<int> result;
    for (int i = 0; i < b.size(); ++i) {
        int count = 0;
        int current = b[i];
        while (current > 0) {
            if (current % 10 == num) {
                ++count;
            }
            current /= 10;
        }
        result.push_back(count);
    }
    return result;
}