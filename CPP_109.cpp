#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[0]) return false;
    }
    
    return true;
}