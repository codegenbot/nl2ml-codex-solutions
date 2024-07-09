```
#include <vector>
#include <algorithm>

bool issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i])
            return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(k);
    partial_sort(arr.begin(), arr.begin() + k, arr.end());
    for (int i = 0; i < k; i++) {
        result[i] = arr[i];
    }
    return result;
}