#include <vector>
#include <cmath>

long long double_the_difference(std::vector<double> &lst){
    long long sum = 0;
    for(double num : lst) {
        if(num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}