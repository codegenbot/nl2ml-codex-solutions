#include <vector>

vector<int> strange_sort_list(vector<int> lst) {
    sort(lst.begin(), lst.end());
    vector<int> result;
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i]);
        if (i != j) {
            result.push_back(lst[j]);
        }
        i++;
        j--;
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}