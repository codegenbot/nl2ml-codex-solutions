#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> sort_third(vector<int> l);

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size() && equal(a.begin(), a.end(), b.begin()));
}

vector<int> sort_third(vector<int> l) {
    vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }
    vector<int> sorted_values;
    for (int idx : indices) {
        sorted_values.push_back(l[idx]);
    }
    sort(sorted_values.begin(), sorted_values.end());
    for (int i = 0; i < indices.size(); ++i) {
        l[indices[i]] = sorted_values[i];
    }
    return l;
}

int main() {
    vector<int> input = {5, 6, 3, 4, 8, 9, 2, 1};
    vector<int> result = sort_third(input);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}