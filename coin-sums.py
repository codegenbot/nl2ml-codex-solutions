```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            results.append(str(count))
            cents %= coin

    return '\n'.join(results)