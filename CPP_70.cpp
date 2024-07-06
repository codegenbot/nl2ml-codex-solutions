#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> strange_sort_list(std::vector<int> vec) {
    if (vec.size() <= 1)
        return vec;  // Don't sort vectors with one or zero elements

    std::sort(vec.begin(), vec.end());
    return vec;
}

int main() {
    std::vector<int> input = {1, 2};
    assert(std::issame(strange_sort_list(input), input));
    return 0;
}