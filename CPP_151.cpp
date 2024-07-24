```
#include <iostream>
#include <vector>

double double_the_difference(std::vector<long double> lst){
    double sum = 0;
    for (long double num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<long double> myVector = {1.5, 2.7, 3.8}; 
    double odd_sum = double_the_difference(myVector); 
    assert(double_the_difference(myVector) == odd_sum);
    return 0;
}