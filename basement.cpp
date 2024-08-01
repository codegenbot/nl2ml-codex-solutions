#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (sum + nums[i] <= 0) {
            return i;
        }
        sum += nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums = {15, 99, -90, 59, -69, 36, -90, 96, 55, -95, -12, -45, -99, -8, -48, -95};
    int result = basement(nums);
    cout << result << endl;
    return 0;
}