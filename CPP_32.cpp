#include <vector>
#include <cmath>

double poly(const vector<double>& coeffs, double x);

double find_zero(const vector<double>& coeffs);

double find_zero(const vector<double>& xs){
    double a = poly(xs, 0);
    double b = poly(xs, 1);
    return -b/a;
}

double poly(const vector<double>& coeffs, double x){
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}