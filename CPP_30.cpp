#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> positive_nums;
    for (float num : v) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    assert(issame(get_positive({1, 2, 3}), {1, 2, 3}));
    return 0;
}