int main() {
    int n, val;
    cin >> n;
    vector<int> nums;
    
    for (int i = 0; i < n; ++i) {
        cin >> val;
        nums.push_back((val / 3) - 2);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num;
    }
    
    cout << sum;
    
    return 0;
}