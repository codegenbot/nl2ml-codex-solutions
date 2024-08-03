def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0] * 4

    for i in range(4):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1
    return tuple(map(str, results))