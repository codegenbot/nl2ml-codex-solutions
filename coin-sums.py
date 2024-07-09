```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            result[i] += cents // coins[i]
            cents %= coins[i]

    return "\n".join(map(str, result))