```cpp
#include <vector>
#include <iostream>

int smallest_change(std::vector<int> arr) {
    int min = INT_MAX;
    for (int i : arr) {
        if (i < min)
            min = i;
    }
    return min;
}

int main() {
    using namespace std;
    assert(smallest_change(vector<int>{{0, 1}}) == 1);
    vector<int> arr;
    cout << "Enter the numbers separated by space: ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    cout << "The smallest change is: " << smallest_change(arr) << endl;
}