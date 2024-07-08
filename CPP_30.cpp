#include <vector>
namespace std {
    bool issame(std::vector<float> a, std::vector<float> b);

    std::vector<float> get_positive(std::vector<float> v) {
        std::vector<float> positive;
        for (float num : v) {
            if (num > 0.0) {
                positive.push_back(num);
            }
        }
        return positive;
    }
}

int main() {
    assert(issame(get_positive({}), {}));
}