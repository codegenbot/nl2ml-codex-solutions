```cpp
#include <vector>

int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        int result = std::floor((double)num / 3) - 2;
        sum += result;
    }
    return sum;
}