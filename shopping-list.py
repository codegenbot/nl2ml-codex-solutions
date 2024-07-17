def shopping_list():
    n = int(input())
    prices = list(map(float, input().split()))
    discounts = list(map(float, input().split()))

    total_price = 0
    for i in range(n):
        price = prices[i] - (prices[i] * discounts[i] / 100)
        total_price += price

    return "{:.1f}".format(total_price)


print(shopping_list())