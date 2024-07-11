from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) < 2 or not all(isinstance(x, float) for x in numbers):
        return []

    min_num = min(numbers)
    max_num = max(numbers)

    return [(x - min_num) / (max_num - min_num) for x in numbers]


input_numbers = list(map(float, input("Enter space-separated float numbers: ").split()))
output = rescale_to_unit(input_numbers)
print(output)