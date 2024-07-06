def count_up_to(n):
    result = []
    for i in range(2, n + 1):
        if is_prime(i):
            result.append(i)
    return result


def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(math.sqrt(num)) + 1):
        if num % i == 0:
            return False
    return True