#include <iostream>
#include <cmath> 
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.25, 4};
    long long odd_sum = double_the_difference(lst);
    return 0;
}