n = int(input())
arr = [int(x) for x in input().split()]
total_sum = sum(arr)
left_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i + 1

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

# Update cut_index based on min_diff
if abs(sum(subvector1) - sum(subvector2)) < min_diff:
    cut_index = len(subvector1)

print(*arr[:cut_index])
print(*arr[cut_index:])