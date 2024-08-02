#include <iostream>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (true) {
        if (isPrime(b)) {
            count++;
            if (count == n)
                return b;
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}