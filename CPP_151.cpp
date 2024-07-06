#include <vector>
#include <cmath>
#include <initializer_list>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && int(num) == num) { 
            sum += pow(int(num), 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.7f, 4.8f}; 
    int odd_sum = double_the_difference(lst);
    return 0;
}