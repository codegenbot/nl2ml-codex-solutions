#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

double poly(vector<double> xs, double x){
    double sum=0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; // Check if the number of coefficients is even
    double x = -xs[1]/(2*xs[0]); // Find the zero point using the quadratic formula
    return round(x, 2); // Round the result to 2 decimal places
}