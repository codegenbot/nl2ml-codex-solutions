#include <vector>
#include <climits> 
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    
    if (arr.empty()) {
        return {{0, 0}}; 
    }
    
    int smallest_even = INT_MAX;
    int index_smallest_even = -1;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_smallest_even = i;
        }
    }
    
    result.push_back({smallest_even, index_smallest_even});
    
    return result;
}