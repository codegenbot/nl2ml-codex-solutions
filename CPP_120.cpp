#include <vector>

vector<int> sortArray(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}