n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

total_sum = sum(nums)
left_sum = 0
min_diff = total_sum
index = 0

for i in range(n):
    left_sum += nums[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        index = i

subvector1 = nums[: index + 1]
subvector2 = nums[index + 1 :]

print(*subvector1)
print(*subvector2)