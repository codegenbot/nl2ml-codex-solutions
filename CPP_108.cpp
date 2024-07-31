#include <iostream>
#include <vector>
#include <cassert>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp != 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0)
                count++;
        } else {
            int sum = 0, sign = 1;
            int temp = -num;
            while (temp != 0) {
                sum += abs(temp % 10);
                temp /= 10;
            }
            if (sign * sum > 0)
                count++;
        }
    }
    return count;
}