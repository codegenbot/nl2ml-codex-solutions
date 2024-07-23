def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        for _ in range(2, n + 1):
            if _ % 2 == 0:
                sequence.append(1 + _ // 2)
            else:
                sequence.extend([sequence[-1], sequence[-2]])
        return sequence