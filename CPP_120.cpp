vector<int> maximum(vector<int> arr, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        auto it = max_element(arr.begin(), arr.end());
        res.push_back(*it);
        arr.erase(distance(arr.begin(), it));
    }
    return res;
}