#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    if (x <= 0 || n <= 0) {
        return false;
    }
    
    double result = log(x) / log(n);
    
    return (result == int(result));
}

int main() {
    assert (is_simple_power(1, 12)==true);
    
    return 0;
}