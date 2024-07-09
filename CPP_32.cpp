#include <vector>
#include <cassert>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs);
double find_zero(const std::vector<double>& xs){
    assert(xs.size() == 2);
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}