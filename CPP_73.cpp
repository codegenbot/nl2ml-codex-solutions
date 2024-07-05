#include <vector>
#include <cassert>
#include <iostream>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int changes = 0;
    for(int i = 0; i < n / 2; ++i) {
        if(arr[i] != arr[n - i - 1]) {
            ++changes;
        }
    }
    return changes;
}

int main() {
    assert(smallest_change({0, 1}) == 1);
    cout << "Test passed!" << endl;
    return 0;
}