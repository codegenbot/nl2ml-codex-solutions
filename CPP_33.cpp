#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> indices;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            indices.push_back(i);
        }
    }

    std::vector<int> temp;
    for (int idx : indices) {
        temp.push_back(l[idx]);
    }

    std::sort(temp.begin(), temp.end());

    for (size_t i = 0; i < indices.size(); ++i) {
        l[indices[i]] = temp[i];
    }

    return l;
}