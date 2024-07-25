def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [3]
    else:
        tribonacci = [3, 0, 0]
        for i in range(3, n + 1):
            if i % 2 == 0:
                tribonacci.append(1 + i // 2)
            else:
                tribonacci.append(
                    tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i + 1]
                )
        return tribonacci