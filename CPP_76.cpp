#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(n);
    return (result - static_cast<int>(result) == 0);
}

int main() {
    assert(is_simple_power(1, 12));

    return 0;
}