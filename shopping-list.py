Here is the completed code:

def shopping_list():
    n = int(input())
    prices = [float(x) for x in input().split()]
    discounts = [float(x) for x in input().split()]
    total_price = 0
    for i in range(n):
        total_price += (1 - discounts[i]/100) * prices[i]
    print(format(total_price, '.4f'))

shopping_list()