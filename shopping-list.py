def calculate_total_price(prices, discounts):
    total_price = 0.0
    for i in range(len(prices)):
        total_price += prices[i] * (1 - discounts[i] / 100)
    return total_price

num_prices = int(input())
prices = list(map(float, input().split()))
num_discounts = int(input())
discounts = list(map(float, input().split()))

result = calculate_total_price(prices, discounts)
print(result)