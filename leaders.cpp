#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for(int i=0; i<n-1; i++) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] <= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    using namespace std; 
    vector<int> result = leaders(arr);
    for(int num : result) cout << num << " ";
    return 0;
}