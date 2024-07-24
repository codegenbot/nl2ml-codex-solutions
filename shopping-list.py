```
def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = 0
    for i in range(n):
        total_price += (prices[i] * (1 - discounts[i]/100))
    return round(total_price, 1)

print(shopping_list())