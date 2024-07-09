
#include <iostream>
#include <algorithm>

std::string circular_shift(int x, int shift) {
    std::string num = std::to_string(x);
    int n = num.length();
    shift = shift % n;
    if (shift == 0) {
        return num;
    }
    if (shift > n) {
        std::reverse(num.begin(), num.end());
        return num;
    }
    std::string result = num.substr(n - shift) + num.substr(0, n - shift);
    return result;
}

int main() {
    assert (circular_shift(11, 101) == "11");
    return 0;
}