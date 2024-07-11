vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) {
        return result;
    }
    int minEven = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }
    result.push_back(minEven);
    result.push_back(minIndex);
    return result;
}