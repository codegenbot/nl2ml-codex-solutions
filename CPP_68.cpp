Here is the completed code:

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int minEvenVal = INT_MAX, minIndex = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            minIndex = i;
        }
    }

    if (minEvenVal != INT_MAX) {
        result.push_back({minEvenVal, minIndex});
    }

    return result;