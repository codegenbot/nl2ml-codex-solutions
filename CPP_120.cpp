#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    assert (issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0) , {}));
    // add more test cases here
    return 0;
}