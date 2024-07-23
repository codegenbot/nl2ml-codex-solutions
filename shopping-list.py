```
def shopping_list():
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = sum(price * (1.0 - float(discount) / 100.0) for price, discount in zip(prices, discounts))
    print("%.2f" % total_price)