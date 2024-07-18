#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_array(const std::vector<int>& array) {
    std::vector<int> sorted_array = array;
    
    if(sorted_array.empty()) return sorted_array;
    
    if((sorted_array.front() + sorted_array.back()) % 2 == 0) {
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    } else {
        std::sort(sorted_array.begin(), sorted_array.end());
    }
    
    return sorted_array;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));

    return 0;
}