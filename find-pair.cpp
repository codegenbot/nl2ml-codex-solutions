int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> numIndex;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            cout << complement << endl << nums[i];
            break;
        }
        numIndex[nums[i]] = i;
    }
    
    return 0;
}