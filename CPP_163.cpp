#include <vector>
#include <cassert>

std::vector<int> generate_integers(int start, int end) {
    std::vector<int> result;
    for (int i = start; i <= end; ++i) {
        result.push_back(i);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    for (int i : a) {
        if (i % 2 == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(issame(generate_integers(17, 89), {}) == false);
    return 0;
}