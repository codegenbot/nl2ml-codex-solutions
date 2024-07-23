#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) leaders.push_back(arr[i]);
    }
    
    return leaders;

int main() {
    vector<int> arr = {1, 3, 4, 3, 2};
    vector<int> result = leaders(arr);
    return 0;
}