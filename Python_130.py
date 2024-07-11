def tri(n):
    if n == 0:
        return [3]
    elif n == 1:
        return [1, 3]
    else:
        sequence = [1, 3]
        for _ in range(2, n + 1):
            if _ % 2 == 0:
                next_num = 1 + _ // 2
            else:
                next_num = sum(sequence[-2:])
            sequence.append(next_num)
        return sequence