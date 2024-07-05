
def count_up_to(n):
    result = []
    for i in range(2, n + 1):
        if is_prime(i):
            result.append(i)
    return result

def is_prime(n):
    if n > 1:
        for i in range(2, int(n**0.5) + 1):
            if n % i == 0:
                return False
        return True