def tri(n):
    if n == 0:
        return [1]
    else:
        result = []
        for i in range(n + 1):
            if i % 2 == 0:
                result.append(i // 2)
            else:
                result.append(result[i - 1] + result[i - 2] + result[i])
        return result