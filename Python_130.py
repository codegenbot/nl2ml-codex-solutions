def tri(n):
    if n == 0:
        return [0]
    if n == 1:
        return [1, 3]
    tribonacci = [3, 0, 0]
    for i in range(3, n):
        if i % 2 == 0:
            tribonacci.append(1 + i // 2)
        else:
            tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
    return tribonacci