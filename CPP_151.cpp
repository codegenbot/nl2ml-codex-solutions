#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && (int)num == num && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}