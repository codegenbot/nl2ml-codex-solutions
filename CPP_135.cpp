int can_arrange(vector<int> arr){
    int largestIdx = -1;
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            largestIdx = i - 1;
        }
    }
    return largestIdx;
}