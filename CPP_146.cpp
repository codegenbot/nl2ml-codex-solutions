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
    std::vector<int> nums = {11, 22, 33, 44};
    int result = specialFilter(nums);
    std::cout << "The number of special numbers is: " << result << std::endl;
    
    return 0;
}