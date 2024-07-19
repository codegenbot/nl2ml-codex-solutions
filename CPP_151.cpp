#include <vector>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {3.0, 4.5, 2.0, 5.0, 1.0};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 35);
}