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
    std::vector<float> input; // declare the vector
    // process the input and calculate odd_sum
    assert(double_the_difference(input) == ???); // uncomment when 'odd_sum' is defined
    return 0;
}