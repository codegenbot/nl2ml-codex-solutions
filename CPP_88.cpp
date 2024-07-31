#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        return array;
    }

    if ((array.front() + array.back()) % 2 == 0) {
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }

    return array;
}

int main() {
    std::vector<int> result = sort_array({21, 14, 23, 11});
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}