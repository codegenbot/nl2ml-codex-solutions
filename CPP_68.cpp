vector<int> pluck(vector<int> arr){
    int smallest_even = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }
    if (index == -1) return {};
    return {smallest_even, index};
}