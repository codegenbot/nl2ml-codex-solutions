#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& xs, double x) {
    double result = 0;
    for (size_t i = 0; i < xs.size(); ++i) {
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs) {
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

int main() {
    std::vector<double> coeffs = {1, -3, 2}; // Example coefficients for a quadratic polynomial x^2 - 3x + 2
    double solution = find_zero(coeffs);
    
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}