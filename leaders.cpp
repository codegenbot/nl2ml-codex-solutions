#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    
    for(int i=n-1; i>=0; i--) {
        if(result.empty() || arr[i] >= result.back()) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}