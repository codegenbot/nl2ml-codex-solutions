#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> myVector) {
    long long sum = 0;
    for (float num : myVector) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

long long result = double_the_difference({1.5f, 2.0f, 3.25f});