try:
    numbers = list(map(float, input("Enter numbers separated by space: ").split()))
    min_num = min(numbers)
    max_num = max(numbers)
    rescaled_numbers = [(x - min_num) / (max_num - min_num) for x in numbers]
    print(rescaled_numbers)
except ValueError:
    print("Invalid input. Please enter valid numbers separated by space.")