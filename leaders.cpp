#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        bool isLeader = true;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if (isLeader) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersVector = leaders(arr);
    for(int i : leadersVector){
        cout << i << " ";
    }
    return 0;