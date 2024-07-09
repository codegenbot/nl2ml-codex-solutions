```c++
#include <vector>
using namespace std;

int basement(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {-3,2,-3,4,5,1,-12,6,1,7};
    int result = basement(nums);
    return 0;
}