#include<stdio.h>
#include<vector>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool is_multiply_prime(int a) {
    vector<int> primes;
    for (int i = 2; i < 100; i++) {
        if (is_prime(i)) {
            primes.push_back(i);
        }
    }
    int size = primes.size();
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            for (int k = j; k < size; k++) {
                if (primes[i] * primes[j] * primes[k] == a) {
                    return true;
                }
            }
        }
    }
    return false;
}