n = int(input())
arr = list(map(int, input().split()))

min_diff = float('inf')
cut_index = -1

left_sum = 0
total_sum = sum(arr)

for i in range(n - 1):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index + 1]
subvector2 = arr[cut_index + 1:]
print(*subvector1)
print(*subvector2)