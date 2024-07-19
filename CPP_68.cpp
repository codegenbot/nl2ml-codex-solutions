#include <vector>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) 
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallest_even = -1;
    int smallest_index = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallest_even == -1 || arr[i] < smallest_even)) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }
    
    if (smallest_even != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }
    
    return result;
}