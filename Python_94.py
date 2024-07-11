def skjkasdkd(lst):
    def is_prime(n):
        if n < 2:
            return False
        for i in range(2, int(n ** 0.5) + 1):
            if n % i == 0:
                return False
        return True

    def sum_of_digits(n):
        return sum(int(d) for d in str(n))

    prime_values = [num for num in lst if is_prime(num)]
    if not prime_values:
        return 0
    max_prime = max(prime_values)
    return sum_of_digits(max_prime)