#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == std::floor(num) && std::fmod(num, 2) != 0) {
            sum += std::pow(num, 2);
        }
    }
    return sum;
}