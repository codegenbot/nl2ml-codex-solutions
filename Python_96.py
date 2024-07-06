def count_up_to(n):
    prime_numbers = []
    for i in range(2, n + 1):
        if is_prime(i):
            prime_numbers.append(i)
    return prime_numbers

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    # Check for the case where the input number is equal to the square root of the upper limit plus 1
    if num == int(num**0.5) + 1:
        return True
    return False