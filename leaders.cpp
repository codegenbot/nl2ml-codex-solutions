#include <iostream> 
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
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
    vector<int> input = {1, 3, 4, 2};
    vector<int> result = leaders(input);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}