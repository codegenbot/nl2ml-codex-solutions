#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float> &a, const std::vector<float> &b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even_values;
    std::vector<float> sorted_even_values;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
            sorted_even_values.push_back(l[i]);
        }
    }
    std::sort(sorted_even_values.begin(), sorted_even_values.end());
    int sorted_even_index = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_values[sorted_even_index];
            sorted_even_index++;
        }
    }
    return l;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    std::cout << "Test passed successfully!" << std::endl;
    return 0;
}