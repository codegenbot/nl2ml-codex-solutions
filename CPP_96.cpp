#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> count_up_to(int n) {
    std::vector<int> primes;
    for (int num = 2; num <= n; ++num) {
        bool is_prime = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(num);
        }
    }
    return primes;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}