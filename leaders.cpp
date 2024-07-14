```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        bool leader = true;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if (leader) {
            leaders.push_back(arr[i]);
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<int> leaders = leaders(arr);
    for (int leader : leaders) {
        cout << leader << " ";
    }
    return 0;
}