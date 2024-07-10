def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(4):
        while cents >= coins[i]:
            results[i] += 1
            cents -= coins[i]
        if cents <= 0:
            break

    return tuple(results)