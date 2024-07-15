#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> derivative(std::vector<float>& xs) {
    std::vector<float> result;
    for (std::size_t i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * i);
    }
    return result;
}

assert(issame(derivative({1.0f}), std::vector<float>{}));