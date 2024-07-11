vector<int> findLeaders(vector<int>& nums) {
    vector<int> leaders;
    int n = nums.size();
    int maxRight = INT_MIN;
    
    for(int i = n-1; i >= 0; i--) {
        if(nums[i] >= maxRight) {
            maxRight = nums[i];
            leaders.push_back(nums[i]);
        }
    }
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = findLeaders(nums);
    
    for(int i = 0; i < result.size(); i++) {
        cout << result[i];
        if(i != result.size()-1) {
            cout << " ";
        }
    }
    
    return 0;
}