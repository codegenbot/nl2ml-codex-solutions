#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
} 

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    for (int i = 2; i <= n; i++) {
        bool is_prime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            result.push_back(i);
        }
    }
    return result;
}