def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0
    for i in range(n-1):
        price = prices[i]
        discount = (discounts[i] / 100) * price
        total_price += price - discount

    return round(total_price, 1)

print(shopping_list())