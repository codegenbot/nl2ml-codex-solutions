#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int n;

    while (!std::cin.eof()) {
        std::cin >> n;
        if (!std::cin.eof()) {
            nums.push_back(n);
        }
    }

    int sum = 0;
    for (int num : nums) {
        sum += num / 3 - 2;
    }

    std::cout << sum << std::endl;

    return 0;
}