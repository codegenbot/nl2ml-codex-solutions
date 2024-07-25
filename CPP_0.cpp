#include <vector>
#include <algorithm>

bool has_close_elements(const std::vector<float>& vec, float epsilon) {
    for (size_t i = 0; i < vec.size() - 1; ++i) {
        if (std::abs(vec[i] - vec[i+1]) <= epsilon) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<float> a = {1.0f, 2.0f, 3.9f, 4.0f, 5.0f, 2.2f};
    assert(has_close_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}, 0.5f) == false);
    return 0;
}