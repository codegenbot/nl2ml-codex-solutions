n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
right_sum = total_sum
min_diff = float('inf')
cut_index = -1

for i in range(n):
    left_sum += arr[i]
    right_sum -= arr[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

if sum(subvector1) == sum(subvector2) or abs(sum(subvector1) - sum(subvector2)) == min_diff:
    print(*subvector1)
    print(*subvector2)
elif cut_index == n-1: 
    print(*arr[:-1])
    print(arr[-1])
else:
    print(*subvector1)
    print(*subvector2)