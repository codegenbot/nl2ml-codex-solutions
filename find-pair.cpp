#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> pair;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            pair.push_back(nums[i]);
            pair.push_back(complement);
            return pair;
        }
        numMap[nums[i]] = i;
    }
    
    pair.push_back(-1);
    return pair;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int target;
    cin >> target;
    
    vector<int> result = findPair(nums, target);
    
    cout << result[0] << " ";
    cout << result[1] << endl;

    return 0;
}