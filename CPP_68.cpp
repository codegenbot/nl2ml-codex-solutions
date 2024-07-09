Here is the solution:

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    int smallest_even = INT_MAX;
    int index_smallest_even = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_smallest_even = i;
        }
    }

    return {{smallest_even, index_smallest_even}};
}