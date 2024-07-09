#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;
    
    int minEvenIndex = -1;
    int minEvenValue = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minEvenIndex = i;
        }
    }

    if (minEvenIndex != -1) {
        result.push_back({minEvenValue, minEvenIndex});
    }

    return result;
}

int main() {
    vector<int> numbers = {10, 3, 4, 6};
    for (auto& p : pluck(numbers)) {
        cout << "Pair: (" << p.first << ", " << p.second << ")" << endl;
    }
    return 0;
}