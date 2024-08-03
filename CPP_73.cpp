Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int changes = 0;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            changes++;
        }
    }

    return changes;
}