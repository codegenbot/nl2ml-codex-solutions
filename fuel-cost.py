n = int(input())
total = 0
for i in range(n):
    x = int(input())
    total += x // 3 - 2
print(total)