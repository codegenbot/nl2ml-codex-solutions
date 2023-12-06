def count_up_to(n):
    if n < 2 or n > 100:
        raise ValueError("Input must be an integer between 2 and 100")
    prime_numbers = []
    for i in range(2, n+1):
        if is_prime(i):
            prime_numbers.append(i)
    return prime_numbers

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True