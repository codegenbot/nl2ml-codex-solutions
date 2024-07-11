#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        bool leader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) result.push_back(arr[i]);
    }
    return result;
}