#include <climits>
using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int smallestEvenValue = INT_MAX;  
    int index = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            index = i;
        }
    }
    
    result.push_back({smallestEvenValue, index});
    
    return result;
}