#include <vector>

int main() {
    std::vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = basement(nums);
    return 0;
}

int basement(std::vector<int>& nums) {
    int minIndex = 0;
    int total = 0;
    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
        if (total < 0)
            return i + 1; 
    }
    return -1;
}