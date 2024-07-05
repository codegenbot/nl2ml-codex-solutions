```
from typing import List, Tuple

def find_closest_elements() -> Tuple[float, float]:
    while True:
        try:
            numbers = input("Enter a list of numbers (space separated): ")
            numbers = [float(num) for num in numbers.split()]
            break
        except ValueError:
            print("Invalid input. Please enter numbers only.")

    min_diff = float("inf")
    closest_pair = (None, None)

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[j] - numbers[i])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return tuple(sorted(closest_pair))

print(find_closest_elements())