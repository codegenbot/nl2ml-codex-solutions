v = list(map(int, input().split()))
total = sum(map(lambda x: max(0, x // 3 - 2), v))
print(total)