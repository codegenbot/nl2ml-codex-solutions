#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> derivative(std::vector<float> xs) {
    std::vector<float> result;
    for (std::size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] - xs[i - 1]);
    }
    return result;
}

int main() {
    assert(issame(derivative(std::vector<float>{1.0}), std::vector<float>{}));
    return 0;
}