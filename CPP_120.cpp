```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    return vector<int>(arr.begin(), arr.begin() + k);
}

int main() {
    vector<int> result = maximum({1, 2, 3, -23, 243, -400, 0}, 0);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
```