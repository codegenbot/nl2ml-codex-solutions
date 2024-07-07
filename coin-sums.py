```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    count = [0, 0, 0, 0]

    for i in range(3,-1,-1):
        while cents >= coins[i]:
            cents -= coins[i]
            count[i] += 1

    return count[3], count[2], count[1], count[0]