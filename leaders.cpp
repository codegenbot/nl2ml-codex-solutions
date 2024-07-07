```
#include <vector>
#include <initializer_list>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= rightmost) {
            rightmost = arr[i];
            result.push_back(rightmost);
        }
    }
    return result;
}

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int leader = arr.back();
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= leader) {
            leader = arr[i];
            leaders.push_back(leader);
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {1, 3, 4, 1, 5};
    vector<int> leadersVector = leaders(arr);
    for (auto leader : leadersVector) {
        cout << leader << endl;
    }
    return 0;
}