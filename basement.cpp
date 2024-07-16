#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums;
    int num;
    while (!std::cin.eof()) {
        std::cin >> num;
        nums.push_back(num);
    }

    int result = basement(nums);
    std::cout << result << std::endl;

    if (std::cin.eof()) {
        return 0;
    } else {
        return 1;
    }
}