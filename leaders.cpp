#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxRight = arr[n-1];
    res.push_back(maxRight);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            res.push_back(maxRight);
        }
    }
    
    return res;
}

int main() {
    vector<int> testArray = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> result = leaders(testArray);
    for(int i: result) cout << i << " ";
    return 0;
}