#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if (n == 0) {
        return leaders;
    }
    
    leaders.push_back(arr[n - 1]);
    
    for (int i = n - 2; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) {
            leaders.push_back(arr[i]);
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}