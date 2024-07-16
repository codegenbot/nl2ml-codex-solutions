#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    std::vector<int> fib = {0, 1};
    int i = 2;
    while (true) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
        if (isPrime(fib.back())) {
            --n;
            if (n == 0) {
                return fib.back();
            }
        }
        ++i;
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cout << prime_fib(n) << std::endl;
    return 0;
}