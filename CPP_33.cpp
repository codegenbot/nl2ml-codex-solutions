#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

bool sort_third(const vector<int>& l) {
    vector<int> sorted_indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_indices.push_back(i);
        }
    }
    sort(sorted_indices.begin(), sorted_indices.end(), [&](int a, int b) {
        return l[a] < l[b];
    });

    vector<int> sorted_values(l.size());
    for (int i = 0; i < sorted_indices.size(); ++i) {
        sorted_values[sorted_indices[i]] = l[i];
    }

    return issame(l, sorted_values);
}

int main() {
    // Main function implementation (if needed)
    return 0;
}