#include <vector>

using namespace std;

vector<vector<int>> pluck(vector<int>& arr) {
    vector<vector<int>> result;
    if (arr.empty()) return result;
    
    int smallest = INT_MAX, smallestIndex = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallest != INT_MAX) result.push_back({smallest, smallestIndex});
    return result;
}