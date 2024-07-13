#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> input = {1.5f, 3.0f, 4.5f, 6.0f};  
    int odd_sum = double_the_difference(input);
    assert(odd_sum == 20); // Provide the correct output for your test case

    return 0;
}