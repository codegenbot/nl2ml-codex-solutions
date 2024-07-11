int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int target = sum / 2;
    
    int prefixSum = 0;
    int idx = 0;
    for (int i = 0; i < nums.size(); ++i) {
        prefixSum += nums[i];
        if (prefixSum >= target) {
            idx = i;
            break;
        }
    }
    
    vector<int> subVec1(nums.begin(), nums.begin() + idx + 1);
    vector<int> subVec2(nums.begin() + idx + 1, nums.end());
    
    for (int i : subVec1) {
        cout << i << endl;
    }
    for (int i : subVec2) {
        cout << i << endl;
    }
    
    return 0;
}