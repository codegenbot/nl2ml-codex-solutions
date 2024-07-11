n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2

prefix_sum = 0
for i, num in enumerate(arr):
    prefix_sum += num
    if abs(prefix_sum - half_sum) < abs(total_sum - 2 * prefix_sum):
        print(*arr[:i + 1])
        print(*arr[i + 1:])
        break