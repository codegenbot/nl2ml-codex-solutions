#include <iostream>
#include <vector>

using namespace std;

int count_nums(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num >= 0) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > 0) {
                count++;
            }
        } else {
            int sum = 0, sign = 1;
            int temp = abs(num);
            while (temp > 0) {
                sum += temp % 10 * sign;
                temp /= 10;
                sign *= -1;
            }
            if (sum > 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(count_nums({1}) == 1);
}