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
    if(xs.size() % 2 != 0) // Check if the number of coefficients is even
        return -1.0; // Return -1.0 to indicate that there is no zero point

    double x = -xs[1]/(2*xs[0]); // Calculate the zero point using the formula
    return x;
}