#include <vector>

int fuelCost(vector<int>& nums) {
    int sum = 0;
    for (int num : nums) {
        int result = std::floor((double)num / 3);
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
        sum += result;
    }
    return sum;
}