#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int> &v1, const std::vector<int> &v2) {
    return v1 == v2;
}

std::vector<int> get_odd_collatz(int n) {
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
    assert(issame(get_odd_collatz(1), {1}));
}