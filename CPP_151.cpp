```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    while(std::cin >> num) {
        lst.push_back(num);
    }
    long long result = double_the_difference(lst);
    std::cout << "The result is: " << result << "\n";
    return 0;
}