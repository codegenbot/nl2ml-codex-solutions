def find_closest_elements():
    while True:
        try:
            nums = list(map(int, input("Enter numbers separated by space: ").split()))
            if len(nums) < 2:
                return "Please enter at least two numbers."
            break
        except ValueError:
            print("Invalid input. Please enter integers only.")
    nums.sort()
    closest_pair = float("inf")
    for i in range(len(nums) - 1):
        if abs(nums[i] - nums[i + 1]) < closest_pair:
            closest_pair = abs(nums[i] - nums[i + 1])
    return str(closest_pair)


print("Closest pair is: ", find_closest_elements())