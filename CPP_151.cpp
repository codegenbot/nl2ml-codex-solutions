#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && floor(lst[i]) == lst[i] && (int)lst[i] % 2 != 0) {
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    vector<float> lst = {1.0, 2.0, 3.0};
    long long odd_sum = 10;
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}