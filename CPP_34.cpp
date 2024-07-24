#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), l.end());
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

for (int i : unique({5, 3, 5, 2, 3, 3, 9, 0, 123})) {
    cout << i << " ";
}
return 0;