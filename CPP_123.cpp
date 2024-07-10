```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
    }
    for (; n > 1; ) {
        if (n % 2 != 0)
            result.push_back(n);
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
    }
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}