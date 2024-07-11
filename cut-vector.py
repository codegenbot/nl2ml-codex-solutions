arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = None

for i in range(len(arr) - 1):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i + 1

if cut_index is not None:
    subvector1 = arr[:cut_index]
    subvector2 = arr[cut_index:]

    print(*subvector1)
    print(*subvector2)
else:
    print("No possible cut point found.")