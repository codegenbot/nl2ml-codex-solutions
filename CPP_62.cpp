#include <vector>

template<typename T>
bool issame(std::vector<T> a, std::vector<T> b) {
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& xs) {
    std::vector<float> result;
    for (int i = 1; i < xs.size(); ++i) {
        result.push_back(xs[i] * i);
    }
    return result;
}

int main() {
    assert(issame(derivative({1}), {}));
    return 0;
}