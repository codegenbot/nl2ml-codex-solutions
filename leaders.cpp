#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0) return leaders;
    
    leaders.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= arr[i+1]) {
            leaders.push_back(arr[i]);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> input = {10,8,5,3};
    vector<int> output = leaders(input);
    for(int i:output) cout << i << " ";
    return 0;
}