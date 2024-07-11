```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            cents -= coins[i]
            result[i] += 1

    return result


cents = int(input())
quarters, dimes, nickels, pennies = coin_sums(cents)
    print(quarters, dimes, nickels, pennies)