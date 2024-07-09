def find_min_difference(numbers):
    numbers.sort()
    min_diff = float("inf")
    result = ()
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

# Call the function with user input as an argument
user_input = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(int, user_input.split()))
print(find_min_difference(numbers))