```
def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))
    total_price = 0
    for price, discount in zip(prices, discounts):
        total_price += price - (price * discount / 100)
    print("{:.1f}".format(total_price))


shopping_list()