def coin_sums():
    cents = int(input())
    quarters = cents // 25
    cents %= 25
    dimes = cents // 10
    cents %= 10
    nickles = cents // 5
    cents %= 5
    pennies = cents
    print(quarters)
    print(nickles)
    print(dimes)
    print(pennies)


coin_sums()