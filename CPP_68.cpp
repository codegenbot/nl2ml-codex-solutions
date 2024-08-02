vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEvenVal = INT_MAX;
    int minEvenIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            minEvenIndex = i;
        }
    }

    result.push_back(minEvenVal);
    result.push_back(minEvenIndex);

    return result;
}