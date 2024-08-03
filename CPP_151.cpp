#include <bits/stdc++.h>

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1,2,3,4,5}; 
    long long odd_sum = double_the_difference(lst); 
    assert (double_the_difference(lst) == odd_sum );
    return 0;
}