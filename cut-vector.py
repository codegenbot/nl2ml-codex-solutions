arr = [3, 1, 2, 4, 3]
total_sum = sum(arr)
min_diff = abs(arr[0] - (total_sum - arr[0]))
cut_position = 0

for i in range(1, len(arr)):
    current_diff = abs(sum(arr[:i]) - (total_sum - sum(arr[:i]))
    if current_diff < min_diff:
        min_diff = current_diff
        cut_position = i

subvector1 = arr[:cut_position]
subvector2 = arr[cut_position:]

print(subvector1)
print(subvector2)