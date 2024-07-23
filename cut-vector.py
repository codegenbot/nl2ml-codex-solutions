nums = list(map(int, input().split()))
total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
cut_index = 0

for i, num in enumerate(nums):
    current_sum += num
    if current_sum >= half_sum:
        if current_sum == half_sum or abs(current_sum - half_sum) < abs(
            current_sum - num - half_sum
        ):
            cut_index = i
            break

print(nums[: cut_index + 1])
print(nums[cut_index + 1 :])