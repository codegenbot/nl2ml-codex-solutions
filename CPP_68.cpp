```cpp
#include <vector>
#include <limits>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

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

    if (minEven == INT_MAX) return {};

    result.push_back({minEven, minIndex});
    return result;

}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {})); 
}