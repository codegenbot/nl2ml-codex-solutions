from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float("inf")
    closest_pair = ()
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
    return closest_pair

input_str = input("Enter a list of numbers separated by commas: ")
input_numbers = list(map(float, input_str.split(", ")))

result = find_closest_elements(input_numbers)
print("{:.2f}, {:.2f}".format(result[0], result[1]))