int main() {
    int n, num;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        nums.push_back((num / 3) - 2);
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    cout << sum;
    return 0;
}