n = int(input())
prices = list(map(float, input().split()))
m = int(input())
discounts = list(map(float, input().split()))

total = sum([(prices[i] * (1 - discounts[i] / 100)) for i in range(n)])

print(total)