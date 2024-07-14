def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0.0
    for i in range(n):
        price = prices[i] * (1 - discounts[i] / 100)
        total_price += price
    return round(total_price, 1)


print(shopping_list())