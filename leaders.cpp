```cpp
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = arr.back();
    
    for(int i = arr.size() - 1; i >= 0; --i) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    
    std::reverse(result.begin(), result.end());
    return result;
}