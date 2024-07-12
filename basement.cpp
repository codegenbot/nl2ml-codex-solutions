#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    int negIndex = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            negIndex = i;
            break;
        }
    }
    return negIndex;
}