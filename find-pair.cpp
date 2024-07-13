int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    map<int, int> seen;
    for (int i = 0; i < n; ++i) {
        if (seen.find(target - nums[i]) != seen.end()) {
            cout << nums[i] << endl;
            cout << target - nums[i] << endl;
            break;
        }
        seen[nums[i]] = i;
    }
    
    return 0;
}