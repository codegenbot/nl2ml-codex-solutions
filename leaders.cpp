#include <vector>

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            result.push_back(arr[i]);
        }
    }
    return result;
}