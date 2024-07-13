#include <vector>
#include <initializer_list>
#include <iostream>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    vector<int> nums = {1, -3, 2, 5, -4};
    cout << basement(nums) << endl;
    return 0;}