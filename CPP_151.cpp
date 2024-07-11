#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += (long long)std::pow(num, 2);
        }
    }
    return sum;
}