int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int n = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int rightSum = totalSum;
    
    for (int i = 0; i < n; ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        if (leftSum == rightSum || abs(leftSum - rightSum) < abs(totalSum / 2)) {
            for (int j = 0; j <= i; ++j) {
                cout << nums[j] << endl;
            }
            cout << 0 << endl;
            for (int j = i + 1; j < n; ++j) {
                cout << nums[j] << endl;
            }
            return 0;
        }
    }
    
    return 0;
}