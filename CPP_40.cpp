#include <iostream>
#include <vector>
#include <cassert>

bool triples_sum_to_zero(const std::vector<int>& l) {
    int n = l.size();
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (l[i] + l[j] + l[k] == 0) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> input = {100, 3, 5, -100};
    std::cout << std::boolalpha << triples_sum_to_zero(input) << std::endl;
    return 0;
}