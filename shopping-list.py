```
def shopping_list():
    n = int(input())
    prices = []
    discounts = []
    for _ in range(n):
        line = input().split()
        price = float(line[0])
        discount = float(line[1]) / 100
        prices.append(price)
        discounts.append(discount)
    total_price = sum([price * (1 - discount) for price, discount in zip(prices, discounts)])
    return round(total_price, 2)

print(shopping_list())