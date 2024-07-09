#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main(){
    std::vector<double> coeffs = {2, -3, 1}; // Example coefficients
    double solution = find_zero(coeffs);
    
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}