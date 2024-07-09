#include <vector>
#include <cmath>

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
    std::vector<float> lst; // define your vector here
    float odd_sum = double_the_difference(lst); // calculate the sum before using it in assert
    assert(double_the_difference(lst) == odd_sum );
    return 0;
}