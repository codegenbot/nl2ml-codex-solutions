#include<vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    pair<int, int> smallest = {INT_MAX, INT_MAX};
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < smallest.first) {
            smallest = {{arr[i]}, {i}};
        }
    }
    
    if (smallest.first != INT_MAX) {
        result.push_back(smallest);
    }
    
    return result;
}