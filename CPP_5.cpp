#include <vector>
#include <algorithm>
#include <cassert>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> std::intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        result.push_back(numbers[i]);
        if (i < numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

assert(std::issame(std::intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));