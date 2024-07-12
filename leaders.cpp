#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findLeaders(const vector<int>& nums) {
    vector<int> leaders;
    int max_right = nums.back();
    
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] >= max_right) {
            leaders.push_back(nums[i]);
            max_right = nums[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end()); // Reverse to restore the original order

    return leaders;
}

int main() {
    vector<int> nums;
    int num;
    while (cin >> num) {
        if (cin.peek() == '\n') {
            nums.push_back(num);
            break;
        }
        nums.push_back(num);
    }

    vector<int> result = findLeaders(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}