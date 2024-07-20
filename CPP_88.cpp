#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> sort_array(const std::vector<int>& array) {
    if(array.empty()) return array;
    std::vector<int> sorted = array;
    
    if((array.front() + array.back()) % 2 == 0) {
        std::sort(sorted.rbegin(), sorted.rend());
    } else {
        std::sort(sorted.begin(), sorted.end());
    }
    
    return sorted;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    
    return 0;
}