def find_pair(n):
    target = int(input())
    nums = list(map(int, input().split()))
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return "{0}\n{1}".format(nums[i], nums[j])


print(find_pair(int(input())))