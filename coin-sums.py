def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = []

    for coin in reversed(coins):
        count = cents // coin
        result.append(count)
        cents %= coin

    return " ".join(map(str, result))