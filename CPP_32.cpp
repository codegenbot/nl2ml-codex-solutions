```cpp
#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include <vector> 
using namespace std;

double poly(vector<double> coeffs, double solution) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(solution, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    double sum = 0;
    double coeff = xs[0];
    vector<vector<double>> temp({{coeff}});
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            sum += xs[i] / coeff;
            temp.push_back({xs[i]});
        }
        else{
            coeff = xs[i];
        }
    }
    vector<double> coeffs;
    for(int i=0; i<temp.size(); i++){
        for(int j=0; j<temp[i].size(); j++){
            coeffs.push_back(temp[i][j]);
        }
    }
    return -sum / coeff;
}

int main() {
    vector<double> xs; 
    cout << "Enter coefficients (space separated): ";
    for(double x; cin >> x; ) {
        xs.push_back(x); 
    }    
    double solution = find_zero(xs);
    vector<double> coeffs;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            coeffs.push_back(xs[i] / xs[i-1]);
        }
    }
    assert(abs(poly(coeffs, solution))< 1e-3);
    return 0;
}