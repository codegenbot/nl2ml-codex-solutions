#include <vector>
using namespace std;

vector<double> coeffs;
double poly(vector<double>, double);

double find_zero(vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return x;
}