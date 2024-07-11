```
def shopping_list():
    n = int(input())
    prices, discounts = [float(x) for x in input().split()], [float(x) for x in input().split()]

    total_price = 0
    for i in range(n):
        price = prices[i] - (prices[i] * discounts[i] / 100)
        total_price += price

    return round(total_price, 2)