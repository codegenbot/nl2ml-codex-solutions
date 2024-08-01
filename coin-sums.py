def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0] * len(coins)

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return tuple(result)


cents = int(input())
print(*coin_sums(cents))