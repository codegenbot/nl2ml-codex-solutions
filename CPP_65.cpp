#include <iostream>
#include <algorithm>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string num_str = std::to_string(x);
    int n = num_str.size();
    
    if (shift > n) {
        std::reverse(num_str.begin(), num_str.end());
        return num_str;
    }
    
    shift %= n;
    std::rotate(num_str.rbegin(), num_str.rbegin() + shift, num_str.rend());
    
    return num_str;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    
    return 0;
}