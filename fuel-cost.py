n = int(input())
total = 0
for i in range(n):
    x = int(input())
    total += max(0, x // 3 - 2)
print(total)