std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    for (int i = n - 1; i >= 0; --i) {
        if (i == n - 1 || arr[i] >= arr[i + 1]) {
            res.push_back(arr[i]);
        }
    }
    std::reverse(res.begin(), res.end());
    return res;
}