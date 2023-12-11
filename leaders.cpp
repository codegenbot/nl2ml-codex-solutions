```
#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> leaders;
    int currentLeader = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > currentLeader) {
            currentLeader = nums[i];
            leaders.push_back(currentLeader);
        }
    }
    return leaders;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> leaders = leaders(nums);
    for (int i = 0; i < leaders.size(); i++) {
        cout << leaders[i] << " ";
    }
    return 0;
}
```