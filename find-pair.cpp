#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result = {-1, -1};

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {complement, nums[i]};
        }
        numMap[nums[i]] = i;
    }

    return result;
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

    vector<int> res = findPair(nums, target);

    if (res[0] != -1) {
        cout << res[0] << " ";
        cout << res[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}