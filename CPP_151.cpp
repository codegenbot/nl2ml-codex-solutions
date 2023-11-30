#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for(int i=0; i<lst.size(); i++){
        if(lst[i] > 0 && lst[i] == (int)lst[i] && (int)lst[i] % 2 != 0){
            sum += pow(lst[i], 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.5, 3.5};
    long long odd_sum = 2;

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}