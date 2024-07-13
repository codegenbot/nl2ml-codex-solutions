#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& nums, int target) {
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return make_pair(nums[i], complement);
        }
        numMap[nums[i]] = i;
    }
    throw runtime_error("No pair found");
}

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << findPair({a, b}, a + b).first << " " << findPair({a, b}, a + b).second << endl;
    }
    return 0;
}