def find_unique_numbers(numbers):
    return [num for num in numbers if numbers.count(num) == 1]

numbers = list(map(int, input().rstrip().split()))
print(find_unique_numbers(numbers))