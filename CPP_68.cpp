#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallest_even = INT_MAX;
    int smallest_index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            smallest_index = i;
        }
    }

    if (smallest_index != -1) {
        result.push_back(smallest_even);
        result.push_back(smallest_index);
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    
    return 0;
}