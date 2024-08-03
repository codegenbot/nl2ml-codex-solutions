#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& xs){
    double a = xs[0], b = xs[1];
    return -b/a;
}

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs = {1, -1}; 
    double solution;
    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}