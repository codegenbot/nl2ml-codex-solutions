#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int minEven = INT_MAX;
    int indexMinEven = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            indexMinEven = i;
        }
    }
    
    result.push_back({minEven, indexMinEven});
    return result;
}