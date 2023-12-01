#include <string>
#include <cassert>
#include <iostream>

using namespace std;

string change_base(int x, int base) {
    string result = "";
    while (x > 0) {
        result = to_string(x % base) + result;
        x /= base;
    }
    return result;
}

int main() {
    int x;
    cin >> x;

    // Check the functionality of change_base function
    assert(change_base(x, x + 1) == to_string(x));

    return 0;
}