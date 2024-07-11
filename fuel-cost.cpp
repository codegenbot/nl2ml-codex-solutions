#include <iostream>
#include <vector>

std::vector<int> nums;

int main() {
    int n;
    while (std::cin >> n) {
        nums.push_back(n);
    }

    int sum = 0;
    for (int num : nums) {
        sum += std::max(num / 3 - 2, 0);
    }

    std::cout << sum;

    return 0;
}