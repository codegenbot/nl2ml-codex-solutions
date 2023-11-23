from typing import List

def sort_numbers(numbers: List[str]) -> str:
    number_mapping = {
        'zero': 0,
        'one': 1,
        'two': 2,
        'three': 3,
        'four': 4,
        'five': 5,
        'six': 6,
        'seven': 7,
        'eight': 8,
        'nine': 9
    }
    sorted_numbers = sorted(numbers, key=lambda x: number_mapping[x])
    return ' '.join(sorted_numbers)

numbers_input = input("Enter a list of numbers in words: ").lower().split()
sorted_numbers_output = sort_numbers(numbers_input)
print(sorted_numbers_output)