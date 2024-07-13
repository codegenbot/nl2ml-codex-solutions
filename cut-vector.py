n = int(input())
nums = [int(input()) for _ in range(n)]

min_diff = float("inf")
cut_idx = 0

for i in range(1, n):
    diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*nums[:cut_idx])
print(*nums[cut_idx:])