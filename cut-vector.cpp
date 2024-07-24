int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int diff = INT_MAX;
    int cutIndex = 0;
    
    for (int i = 1; i < n; ++i) {
        int leftSum = 0;
        int rightSum = 0;
        
        for (int j = 0; j < i; ++j) {
            leftSum += nums[j];
        }
        
        for (int k = i; k < n; ++k) {
            rightSum += nums[k];
        }
        
        int currentDiff = abs(leftSum - rightSum);
        if (currentDiff < diff) {
            diff = currentDiff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i < cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    cout << endl;
    for (int i = cutIndex; i < n; ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}