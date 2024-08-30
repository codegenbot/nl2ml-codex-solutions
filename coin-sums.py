def coin_sums(cents):
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]
    for i in range(4):
        if cents >= coins[i]:
            count = int(cents / coins[i])
            cents %= coins[i]
            res[i] = count
    return " ".join(map(str, res))