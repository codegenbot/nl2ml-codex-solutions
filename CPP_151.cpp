#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> my_lst = {1, 2, 3}; 
    int odd_sum = double_the_difference(my_lst); 
    assert(odd_sum == 14);
}