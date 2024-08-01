#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(std::vector<float>{1}, std::vector<float>{}));
    assert(issame(std::vector<float>{2, 3, 4}, std::vector<float>{2, 3, 4}));
    return 0;
}