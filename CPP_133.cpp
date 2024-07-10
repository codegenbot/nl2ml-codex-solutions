#include <vector>
#include <cmath>

int sum_squares(std::vector<int> lst){
    int sum = 0;
    for (int num : lst) {
        int sqrt_num = std::sqrt(num);
        sum += sqrt_num * sqrt_num;
    }
    return sum;
}