#include <vector>
using namespace std;

pair<vector<int>, vector<int>> cutVector(vector<int> nums) {
    int minDiff = INT_MAX;
    int splitIndex = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[0]);
        if (diff < minDiff) {
            minDiff = diff;
            splitIndex = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + splitIndex), vector<int>(nums.begin() + splitIndex, nums.end())};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    pair<vector<int>, vector<int>> result = cutVector(nums);
    cout << "1 ";
    for (int num : result.first) {
        cout << num << " ";
    }
    cout << endl;
    cout << "0 ";
    for (int num : result.second) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}