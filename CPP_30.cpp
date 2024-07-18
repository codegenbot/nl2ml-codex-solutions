#include <vector>
#include <cassert>
bool issame(std::vector<float> v1, std::vector<float> v2);

std::vector<float> get_positive(std::vector<float> l);

bool issame(std::vector<float> v1, std::vector<float> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), get_positive({})));
    return 0;
}