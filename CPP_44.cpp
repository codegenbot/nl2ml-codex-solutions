#include <string>
#include <iostream>
#include <cassert>
#include <sstream>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x = 10;
    std::ostringstream os;
    os << x;
    assert(change_base(x, x + 1) == os.str());
    return 0;
}