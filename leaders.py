n = int(input())
arr = list(map(int, input().split()))

max_right = arr[-1]
leaders = [max_right]

for i in range(n - 2, -1, -1):
    if arr[i] >= max_right:
        leaders.append(arr[i])
        max_right = arr[i]

leaders.reverse()
print(len(leaders))
print(*leaders)