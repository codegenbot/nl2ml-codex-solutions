int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int diff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 1; i < n; ++i) {
        int leftSum = accumulate(nums.begin(), nums.begin() + i, 0);
        int rightSum = accumulate(nums.begin() + i, nums.end(), 0);
        int currentDiff = abs(leftSum - rightSum);
        
        if (currentDiff < diff || (currentDiff == diff && i < cutIndex)) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    cout << 0 << endl;
    
    for (int i = cutIndex; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}