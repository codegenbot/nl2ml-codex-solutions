#include <string>
#include <cassert>

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = std::to_string(x % base) + result;
        x /= base;
    }
    return result;
}