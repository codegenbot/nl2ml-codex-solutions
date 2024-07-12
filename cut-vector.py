arr = list(map(int, input().split()))
n = len(arr)

total_sum = sum(arr)
left_sum = 0
min_diff = total_sum
cut_idx = -1

for i in range(n):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*arr[: cut_idx + 1])
print(*arr[cut_idx + 1 :])