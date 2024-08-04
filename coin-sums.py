def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    res = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            res[i] += 1

    return " ".join(map(str, res))


print(coin_sums())