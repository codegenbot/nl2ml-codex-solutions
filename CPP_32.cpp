#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

std::vector<double> coeffs = {1, -2, 1};

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double root = 0.0;
    // Your implementation to find the zero goes here
    return root;
}

int main() {
    std::vector<double> coeffs = {1, -2, 1};
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}