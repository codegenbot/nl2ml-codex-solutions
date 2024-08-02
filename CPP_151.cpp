#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> numbers) {
    long long sum = 0;
    for (float num : numbers) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> numbers;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }
    long long result = double_the_difference(numbers);
    std::cout << "The sum of squares of positive integers is: " << result << std::endl;
    return 0;
}