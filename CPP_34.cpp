#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> res;
    for (int i : l) {
        if (find(res.begin(), res.end(), i) == res.end())
            res.push_back(i);
    }
    sort(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result = unique(v);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}