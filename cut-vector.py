n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
current_sum = 0
idx = 0

for i, num in enumerate(arr):
    current_sum += num
    if current_sum >= half_sum:
        idx = i
        break

if current_sum > half_sum:
    if current_sum - half_sum < total_sum - current_sum:
        idx -= 1

print(*arr[: idx + 1])
print(*arr[idx + 1 :])