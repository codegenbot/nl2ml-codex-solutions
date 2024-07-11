Here is the solution:

vector<int> pluck(vector<int> arr) {
    vector<int> result = {};
    int smallest_even_value = INT_MAX;
    int index_of_smallest_even_value = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even_value) {
            smallest_even_value = arr[i];
            index_of_smallest_even_value = i;
        }
    }

    if (smallest_even_value != INT_MAX) {
        result.push_back(smallest_even_value);
        result.push_back(index_of_smallest_even_value);
    }

    return result;
}