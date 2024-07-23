```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost);
    for (int i = v.size() - 1; i >= 0; --i) {
        if (i == v.size() - 1 || v[i] >= rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {1, 3, 4, 2, 8};
    vector<int> res = leaders(v);
    for (int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}