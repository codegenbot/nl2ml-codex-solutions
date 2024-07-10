```
def count_up_to(n):
    def is_prime(num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    result = []
    prime_count = 0
    for i in range(2, n+1): 
        if is_prime(i):
            result.append(i)
            prime_count += 1
        if prime_count >= n:
            break
    return result[:n]