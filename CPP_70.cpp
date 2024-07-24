#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool strange_sort_list(const std::vector<int>& vec) {
    std::vector<int> sorted_vec = vec;
    std::sort(sorted_vec.begin(), sorted_vec.end());
    return vec == sorted_vec;
}

bool is_same(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> vec1 = {1, 2, 3};
    std::vector<int> vec2 = {1, 2, 3};

    std::cout << (vec1 == vec2 ? "Vectors are the same" : "Vectors are different") << std::endl;

    assert(strange_sort_list(std::vector<int>{111111}));

    assert(is_same(strange_sort_list(std::vector<int>{111111}), std::vector<int>{111111}));

    return 0;
}