#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // include for std::abs

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> order_by_points(std::vector<int> nums){
    std::sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = std::abs(a), temp_b = std::abs(b);

        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }

        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }

        if (sum_a == sum_b) {
            return a < b;
        }

        return sum_a < sum_b;
    });

    return nums;
}

int main() {
    std::vector<int> result = order_by_points({0, 6, 6, -76, -21, 23, 4});

    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}