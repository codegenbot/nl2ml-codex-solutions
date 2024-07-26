def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            count = min((cents // coins[i]), len(result) - i)
            cents -= count * coins[i]
            result[i:] = [count] + result[i:]

    return result

cents = int(input())
print(*coin_sums(cents))