```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        while cents >= coins[i]:
            quotient = min((cents + coins[i] - 1) // coins[i], result[i] + 1)
            cents -= quotient * coins[i]
            result[i] += quotient

    return result


print('\n'.join(map(str, coin_sums(int(input())))))