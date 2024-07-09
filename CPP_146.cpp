#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 != 0 || num % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    std::vector<int> nums = {11, 12, 13, 14, 15};
    int result = specialFilter(nums);
    std::cout << "The number of integers that meet the condition is: " << result << std::endl;
    return 0;
}