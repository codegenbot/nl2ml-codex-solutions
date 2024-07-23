std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= *std::max_element(arr.begin() + i, arr.end())) {
            result.push_back(arr[i]);
        }
    }
    return result;
}