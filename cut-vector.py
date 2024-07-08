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
    
    if diff < min_diff or (diff == min_diff and abs(len(arr[:i+1]) - len(arr[i+1:])) > 0):
        min_diff = diff
        cut_index = i + 1

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)