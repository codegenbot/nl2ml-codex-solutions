#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(const vector<double>& coeffs, double x) {
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

int main() {
    vector<double> coeffs = {1, -1, 0};
    double solution;
    for (int i = 0; i < coeffs.size(); ++i) {
        solution = find_zero(coeffs);
    }
    assert(abs(poly(coeffs, solution)) < 0.001);

    return 0;
}