bool is_divisible(long long i) {
    return n % i == 0;
}

bool is_prime(long long n) {
    if (n <= 1)
        return false;
    for (long long i = 2; !is_divisible(i) && i * i <= n; i++)
        ; // do nothing, just check
    return !is_divisible(i);
}