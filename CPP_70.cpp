#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(lst[0]);
        lst.erase(lst.begin());
        if (!lst.empty())
            sort(lst.begin(), lst.end());
    }

    return result;
}