```cpp
#include <iostream>
#include <vector>
using namespace std;

int basement(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) return i;
    }
    return -1;

}

int main() {
    vector<int> nums = {-2, 3, 1, -5, 4};
    int result = basement(nums);
    cout << "Basement index: " << result << endl;
    return 0; }