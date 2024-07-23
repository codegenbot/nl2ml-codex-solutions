def find_pair(n, nums):
    seen = set()
    for num in nums:
        target = n - num
        if target in seen:
            return str(num) + "\n" + str(target)
        seen.add(num)


print(find_pair(int(input("")), [int(x) for x in input().split()]))