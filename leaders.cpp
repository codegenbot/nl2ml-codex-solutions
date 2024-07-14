#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 1) {
        leaders.push_back(arr[0]);
        return leaders;
    }
    
    for(int i=n-2; i>=0; i--) {
        while(i > 0 && arr[i] <= arr[i+1]) {
            i--;
        }
        leaders.push_back(arr[i]);
    }
    leaders.push_back(arr[n-1]);
    
    return leaders;
}