Here is the completed code:

vector<int> pluck(vector<int> arr) {
    int smallestEvenValue = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            smallestIndex = i;
        }
    }

    vector<int> result;
    if (!arr.empty()) {
        result.push_back(smallestEvenValue);
        result.push_back(smallestIndex);
    } else {
        result = {};
    }

    return result;
}