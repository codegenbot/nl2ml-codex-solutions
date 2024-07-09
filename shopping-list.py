```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(price - (price * discount / 100.0) for price, discount in zip(prices, discounts))
    return str(round(total_price, 2))

print(shopping_list())