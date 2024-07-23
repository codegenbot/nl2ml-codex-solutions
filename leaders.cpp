````
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<int> leaders = leaders(arr);
    // Output or further processing
    for (int i : leaders) cout << i << " ";
    return 0;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        
        if (isLeader) res.push_back(arr[i]);
    }
    
    return res;
}
```