n = int(input())
total = sum(max(0, x // 3 - 2) for x in map(int, input().split()))
print(total)