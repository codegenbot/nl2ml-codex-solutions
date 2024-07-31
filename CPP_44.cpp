#include <string>
#include <cassert>

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = to_string(remainder) + result;
        x /= base;
    }
    return result == "" ? "0" : result;
}