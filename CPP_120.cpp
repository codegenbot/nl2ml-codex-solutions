#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

bool issame(vector<int> a, vector<int> b) {
    // implementation of issame function
}

int main() {
    // test case
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    
    return 0;
}