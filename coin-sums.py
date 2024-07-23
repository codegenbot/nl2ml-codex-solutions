```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]

    for i in range(len(coins)-1, -1, -1):
        while cents >= coins[i]:
            cents -= coins[i]
            results[i] += 1
        if cents < coins[i]: break

    return results

cents = int(input())
print(*coin_sums(cents))