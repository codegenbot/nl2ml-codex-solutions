def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [3]
    else:
        seq = [3]
        a, b, c = 0, 0, 3
        for i in range(1, n):
            if i % 2 == 0:
                c = 1 + i // 2
            else:
                a, b, c = b, c, a + b + c
            seq.append(c)
        return seq