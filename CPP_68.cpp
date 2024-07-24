```cpp
#include <vector>
#include <climits>
#include <iostream>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        result.push_back({minEven, minIndex});
    }

    return result;
}

int getAndProcessInput() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    vector<pair<int, int>> output = pluck(arr);

    for (const auto& pair : output) {
        cout << "Pair: (" << pair.first << ", " << pair.second << ")" << endl;
    }
    return 0;
}

int main() {
    return getAndProcessInput();
}