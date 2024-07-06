```cpp
#include <climits>
#include <vector>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) {
        return result;
    }
    
    int smallestEven = INT_MAX;
    int smallestIndex = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallestEven != INT_MAX) {
        result.push_back({smallestEven, smallestIndex});
    } else {
        result.push_back({0, -1});
    }
    
    return result;
}