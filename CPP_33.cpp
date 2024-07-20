#include <vector>
#include <algorithm>

std::vector<int> sort_third(const std::vector<int>& l) {
    std::vector<int> result = l;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            std::sort(result.begin() + i, result.begin() + i + 3);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}