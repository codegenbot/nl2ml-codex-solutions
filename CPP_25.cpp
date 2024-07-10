#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    if (n <= 1) {
        factors.push_back(n);
        return factors;
    }
    if (n < 0) {
        factors.push_back(-1);
        n = abs(n);
    }
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}