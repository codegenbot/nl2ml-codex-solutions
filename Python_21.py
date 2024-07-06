```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        raise ValueError("Input list is empty")

    for num in numbers:
        if isinstance(num, str):
            try:
                float(num)
            except ValueError:
                raise ValueError("Input list must contain only numbers")
        elif not isinstance(num, (int, float)):
            raise ValueError("Input list must contain only numbers")

    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]


if __name__ == "__main__":
    try:
        input_str = input("Enter space-separated or comma-separated numbers: ")
        if not input_str.strip():
            print("Error: No input provided")
            exit()

        result = rescale_to_unit([float(x.strip()) for x in input_str.replace(',', ' ').split()])
        print(result)
    except ValueError as e:
        print(f"Error: {e}")
        exit(1)