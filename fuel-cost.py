nums = [int(num) for num in input().split()]
total = sum(((num + 2) // 3) - 2 for num in nums)
print(total)