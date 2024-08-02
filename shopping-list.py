def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]

    total_price = 0
    for i in range(n):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price

    print("{:.1f}".format(total_price))