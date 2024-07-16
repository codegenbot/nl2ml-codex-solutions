#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x,i);
    }
    return result;
}

double find_zero(const vector<double>& xs){
    double a = poly({-xs[1], xs[0]}, 0);
    double b = poly({-xs[1], xs[0]}, 1);
    return -b/a;
}