#include <iostream>
#include <cassert>

int digitSum(const std::string& s) {
    int sum = 0;
    for (char c : s) {
        if (std::isupper(c)) {
            sum += c;
        }
    }
    return sum;
}

int main() {
    assert(digitSum("You arE Very Smart") == 327);
    
    return 0;
}