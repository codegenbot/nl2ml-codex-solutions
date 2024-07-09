#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int> &a, const std::vector<int> &b) {
    return a == b;
}

std::vector<int> cpp123(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(cpp123(1), {1}));
    return 0;
}