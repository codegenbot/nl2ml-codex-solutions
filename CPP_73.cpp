int smallest_change(vector<int> arr){
    int n = arr.size();
    int changes = 0;
    for (int i = 0; i < n / 2; ++i) {
        changes += abs(arr[i] - arr[n - i - 1]);
    }
    return changes / 2;
}