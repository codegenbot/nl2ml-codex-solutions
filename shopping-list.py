def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(lambda x: float(x)/100, input().split()))
    total_price = sum(
        price - (price * d) for price, d in zip(prices, discounts)
    )
    return round(total_price, 2)

print(shopping_list())