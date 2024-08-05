#include <vector>
#include <algorithm>
#include <functional>

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;

    int sum = array.front() + array.back();
    if(sum % 2 == 0)
        std::sort(array.begin(), array.end(), std::greater<int>());
    else
        std::sort(array.begin(), array.end());

    return array;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert (issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}