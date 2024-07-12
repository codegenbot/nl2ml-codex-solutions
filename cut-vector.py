n = int(input())
arr = [int(input()) for _ in range(n)]
diff = float("inf")
cut_point = 0

for i in range(1, n):
    new_diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if new_diff < diff:
        diff = new_diff
        cut_point = i

print(*arr[:cut_point])
print(*arr[cut_point:])