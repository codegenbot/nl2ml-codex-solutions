#include <string>
#include <algorithm>
#include <cassert>

std::string circular_shift(int x, int shift) {
    std::string numStr = std::to_string(x);
    int n = numStr.size();
    shift %= n;
    if (shift == 0) {
        return numStr;
    }
    if (shift > n) {
        std::reverse(numStr.begin(), numStr.end());
        return numStr;
    }
    std::string result = numStr.substr(n - shift) + numStr.substr(0, n - shift);
    return result;
}

int main() {
    assert(circular_shift(11, 101) == "11");
    return 0;
}