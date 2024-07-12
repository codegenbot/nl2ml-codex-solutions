#include <vector>
#include <cassert>
#include <initializer_list>

bool has_close_elements(const std::vector<float>& v, float epsilon) {
    for (size_t i = 0; i < v.size() - 1; ++i) {
        if (std::abs(v[i] - v[i + 1]) <= epsilon)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements(a, 0.5) == false);
}