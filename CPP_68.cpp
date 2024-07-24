#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        return result;
    }
    
    int smallestEvenValue = INT_MAX;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallestEvenValue != INT_MAX) {
        result.push_back({smallestEvenValue, smallestIndex});
    } else {
        result.push_back({0, 0}); // Return {0, 0} if no even values found
    }
    
    return result;
}