n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = float('inf')
cut_index = 0

for i in range(n):
    left_sum = sum(arr[:i])
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)