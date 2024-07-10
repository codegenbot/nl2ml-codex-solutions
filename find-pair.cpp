#include <vector>
using namespace std;

vector<int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            result.push_back(complement);
            result.push_back(nums[i]);
            break;
        }
        numMap[nums[i]] = i;
    }

    return result;
}

int main() {
    int n, x1, x2;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<int> result = findPair(nums, target);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}