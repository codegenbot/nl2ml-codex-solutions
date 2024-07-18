#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(std::vector<int> arr); // Function prototype

bool issame(std::vector<int> a, std::vector<int> b) {
    return sort_array(a) == sort_array(b);
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(issame({2, 4, 8, 16, 32}, {2, 4, 8, 16, 32}));
    return 0;
}