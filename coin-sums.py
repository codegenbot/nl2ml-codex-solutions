```
def coin_sums(cents):
    coins = [25, 10, 5, 1]  # quarters, dimes, nickels, pennies
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        cents %= coins[i]
        result[i] = count

    return ' '.join(map(str, result))