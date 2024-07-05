#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num <= 10) continue;
        num = std::abs(num);
        std::string str = std::to_string(num);
        if ((str[0] - '0') % 2 != 0 && (str.back() - '0') % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::cout << specialFilter({15, 28, 33, -19, 12}) << std::endl; // Example usage
}