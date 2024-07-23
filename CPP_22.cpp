#include <vector>
#include <iostream>

std::vector<int> filter_integers(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (i > 0) {
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int solution(std::vector<int> input) {
    assert(issame(filter_integers(input), {3, 3, 3}));
    return 0;
}