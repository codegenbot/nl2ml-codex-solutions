n = int(input())
arr = [int(input()) for _ in range(n)]

min_diff = float("inf")
cut_index = -1

for i in range(1, n):
    diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if diff < min_diff or (diff == min_diff and i < cut_index):
        min_diff = diff
        cut_index = i

print(*arr[:cut_index])
print(*arr[cut_index:])