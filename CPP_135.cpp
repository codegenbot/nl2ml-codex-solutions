Here is the completed code:

int can_arrange(vector<int> arr) {
    int result = -1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i-1]) {
            result = i;
            break;
        }
    }
    return result;
}