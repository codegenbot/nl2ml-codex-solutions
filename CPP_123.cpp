```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            result.push_back(i);
    }
    sort(result.begin(), result.end());
    return result;
}