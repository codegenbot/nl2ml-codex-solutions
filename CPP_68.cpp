Here is the completed code:

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;

    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int idxMinEven = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            idxMinEven = i;
        }
    }

    if (minEven == INT_MAX) return result;

    result.push_back({minEven, idxMinEven});

    return result;
}