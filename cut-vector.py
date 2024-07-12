n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
prefix_sum = 0
min_diff = total_sum
cut_idx = 0

for i in range(n):
    prefix_sum += arr[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*arr[: cut_idx + 1])
print(*arr[cut_idx + 1 :])