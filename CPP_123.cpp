#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> get_odd_collatz(int n);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 != 0) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
}