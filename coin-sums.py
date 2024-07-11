def coin_sums(cents):
    coins = [25, 10, 5, 1]
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickels = cents // 5
    cents %= 5
    pennies = cents

    return (quarters, dimes, nickels, pennies)

cents = int(input())
print(*coin_sums(cents))