#include <vector>
#include <cassert>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

int main(){
    std::vector<double> coeffs = {1.0, -3.0, 2.0}; // Use `std::vector<double>`
    double solution;
    solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);

    return 0;
}