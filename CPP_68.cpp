Here is the completed code:

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int smallestEvenValue = INT_MAX;
    int index = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            index = i;
        }
    }

    return {{smallestEvenValue, index}};
}