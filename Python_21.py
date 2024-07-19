def rescale_to_unit(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Call the function with the required numbers input
numbers = [5, 10, 15, 20]
print(rescale_to_unit(numbers))