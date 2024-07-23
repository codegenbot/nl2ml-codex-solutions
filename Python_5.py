from typing import List


def intersperse(delimiter: int, numbers: List[int] = None) -> List[int]:
    while True:
        if not numbers or len(numbers) == 0:
            user_input = input("Enter a list of integers separated by space or comma: ")
            numbers = [int(num) for num in user_input.split()]
        if not all(isinstance(num, int) for num in numbers):
            print("Numbers must be a list of integers")
            continue

        if not isinstance(delimiter, int):
            print("Delimiter must be an integer")
            continue

        if delimiter == 0:
            print("Delimiter cannot be zero")
            continue

        result = [numbers[0]]

        for i, num in enumerate(numbers[1:]):
            result.extend([delimiter, num])

        return result