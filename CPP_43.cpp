#include <iostream>
#include <vector>
#include <cassert>

bool pairs_sum_to_zero(const std::vector<int>& l) {
    for (size_t i = 0; i < l.size(); ++i) {
        for (size_t j = i + 1; j < l.size(); ++j) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::vector<int> input;
    int num;
    while (std::cin >> num) {
        input.push_back(num);
    }
    
    if (pairs_sum_to_zero(input)) {
        std::cout << "We found two numbers that sum up to zero." << std::endl;
    } else {
        std::cout << "No two numbers sum up to zero." << std::endl;
    }

    return 0;
}