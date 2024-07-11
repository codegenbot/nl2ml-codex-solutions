#include <vector>
#include <limits>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int minEven = numeric_limits<int>::max();
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }
    
    if (minIndex != -1) result = {{minEven, minIndex}};
    
    return result;
}