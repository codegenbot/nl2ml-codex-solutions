Here is the completed code:

int can_arrange(vector<int> arr) {
    int maxIndex = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i-1]) {
            maxIndex = i;
        } else {
            break;
        }
    }
    return maxIndex;
}