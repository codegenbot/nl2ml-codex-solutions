```cpp
vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;
}