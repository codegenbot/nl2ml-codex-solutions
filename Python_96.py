def count_up_to(n):
    result = []
    for i in range(2, n):
        if all(i % j != 0 for j in range(2, int(i**0.5) + 1)):
            result.append(i)
    return result