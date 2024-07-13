```cpp
#include <vector>

int basement(std::vector<int>& nums) {
    int sum = 0;
    for (unsigned long i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i + 1; 
        else if (sum == 0) sum = 0; 
    }
    return -1;
}