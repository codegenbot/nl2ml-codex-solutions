bool move_one_ball(vector<int> arr) {
    if (arr.empty()) return true;
    int n = arr.size();
    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) count++;
    }
    if (arr[n - 1] > arr[0]) count++;
    return count <= 1;
}