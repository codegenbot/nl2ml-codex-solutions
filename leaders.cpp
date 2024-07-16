```cpp
#include <vector>
#include <iostream> 

using namespace std;

vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxSoFar = arr[n-1]; // Initialize with the last element as leader.

    for(int i=n-2; i>=0; i--){
        if(arr[i] >= maxSoFar){
            res.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> leadersVec = calculateLeaders(arr);
    for(int i:leadersVec){
        cout << i << " ";
    }
    return 0;
}