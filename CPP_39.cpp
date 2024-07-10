int prime_fib(int n) {
    int a = 0, b = 1, fib = 0;
    for (int i = 1; ; i++) {
        if (i == n) {
            return b;
        }
        fib = a + b;
        a = b;
        b = fib;
        if (!isPrime(fib)) {
            continue;
        }
        if (i == n) {
            return fib;
        }
    }
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}