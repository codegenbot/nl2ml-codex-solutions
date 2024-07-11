#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> taskFunction(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    sortedList.erase(std::unique(sortedList.begin(), sortedList.end()), sortedList.end());
    return sortedList;
}

int contestMain() {
    std::vector<int> expected = {0, 2, 3, 5, 9, 123};
    std::vector<int> result = taskFunction({5, 3, 5, 2, 3, 3, 9, 0, 123});
    assert(std::equal(result.begin(), result.end(), expected.begin()));
    return 0;
}