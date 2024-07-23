```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            odd_sum += pow(num, 2);
        }
    }
    return odd_sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the vector: ";
    std::cin >> n;

    std::vector<float> lst;
    for (int i = 0; i < n; ++i) {
        float num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);

    return 0;
}