```
def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    
    total_price = sum(price - (price * discount / 100) for price, discount in zip(prices, discounts))
    
    return str(round(total_price, 2))

print(shopping_list())