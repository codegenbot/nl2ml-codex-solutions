#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int minSubArraySum(vector<int> nums) {
    int min_sum = numeric_limits<int>::max();
    for (int i = 0; i < nums.size(); i++) {
        int current_sum = 0;
        for (int j = i; j < nums.size(); j++) {
            current_sum += nums[j];
            if (current_sum < min_sum) {
                min_sum = current_sum;
            }
        }
    }
    return min_sum;
}

int main() {
    if (minSubArraySum({1, -1}) != 0) {
        assert(false);
    }
    return 0;
}