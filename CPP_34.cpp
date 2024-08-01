```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), l.end());
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> res = unique(l);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}