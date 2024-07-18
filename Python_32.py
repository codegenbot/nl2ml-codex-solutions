def find_zero(nums):
    if 0 in nums:
        zero_index = nums.index(0)
        return nums[(zero_index + 1) % len(nums)]
    return "No zero found"

input_list = list(map(float, input("Enter space-separated numbers: ").split()))
print(find_zero(input_list))