```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        results[i] = count

    return results[3], results[2], results[1], results[0]