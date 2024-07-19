def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(price - (discount / 100) * price for price, discount in zip(prices, discounts))
    return round(total_price, 1)

print(shopping_list())