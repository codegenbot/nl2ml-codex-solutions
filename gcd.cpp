#include <cmath>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, std::abs(a % b));
}