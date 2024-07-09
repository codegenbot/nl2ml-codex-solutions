```
n = int(input())
prices = list(map(float, input().split()))*((n-1)//len(input().split())+1)
discounts = list(map(float, input().split()))*((n-1)//len(input().split())+1)

total_price = 0
for i in range(n):
    total_price += prices[i] * (1 - discounts[i] / 100)

print(total_price)