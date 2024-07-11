int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;
    int rightSum = totalSum;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < nums.size(); ++i) {
        leftSum += nums[i];
        rightSum -= nums[i];
        
        int diff = abs(leftSum - rightSum);
        
        if (diff < minDiff || (diff == minDiff && abs(leftSum - rightSum) < abs(cutIndex - nums.size()/2))) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        cout << nums[i] << endl;
    }
    
    for (int i = cutIndex + 1; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }
    
    return 0;
}