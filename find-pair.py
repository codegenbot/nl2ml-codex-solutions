def find_pair():
    n = int(input())
    nums = [int(i) for i in input().split()]
    target = int(input())

    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if nums[i] + nums[j] == target:
                return "{}\n{}".format(nums[i], nums[j])


print(find_pair())