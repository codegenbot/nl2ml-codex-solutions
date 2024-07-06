#include <vector>
#include <iostream>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 0) {
            int sum = 0;
            bool negative = false;
            while (num != 0) {
                int digit = abs(num) % 10;
                if (num < 0)
                    negative = true;
                num /= 10;
                if (digit > 0 || negative)
                    sum += digit;
            }
            if (sum > 0)
                count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {1};
    assert(count_nums(nums) == 1);
    return 0;
}