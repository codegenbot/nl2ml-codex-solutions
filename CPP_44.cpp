#include <string>
#include <cassert>

string change_base(int x, int base) {
    assert(base > 1);
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result == "" ? "0" : result;
}