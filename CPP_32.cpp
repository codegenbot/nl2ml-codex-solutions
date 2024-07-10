#include <vector>
#include <cmath>

double poly(const vector<double>& coeffs, double x) {
    double result = 0.0;
    for (const auto& coeff : coeffs) {
        result += coeff * pow(x, &coeff - &coeffs[0]);
    }
    return result;
}

double find_zero(const vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    vector<double> coeffs = {1, -2, 1};
    double solution;
    solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}