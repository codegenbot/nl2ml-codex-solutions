n = int(input())
arr = list(map(int, input().split()))
leaders = []
max_right = arr[-1]
leaders.append(max_right)
for i in range(n - 2, -1, -1):
    if arr[i] >= max_right:
        max_right = arr[i]
        leaders.insert(0, arr[i])
print(len(leaders))
print(*leaders)