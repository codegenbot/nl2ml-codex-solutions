#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        if (n % 2 == 1) {
            result.push_back(n);
        }
        n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    }
    result.push_back(1);
    sort(result.begin(), result.end());
    return result;
}

int main() {
    // Test the function get_odd_collatz
    std::vector<int> test_result = get_odd_collatz(10);
    std::vector<int> expected_result = {1, 5, 7, 9, 15};
    assert(issame(test_result, expected_result));

    return 0;
}