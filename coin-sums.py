def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(4):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return " ".join(map(str, result))