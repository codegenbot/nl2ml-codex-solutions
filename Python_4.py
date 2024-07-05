from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers)

if __name__ == "__main__":
    input_data = input("Enter numbers separated by spaces: ").strip()
    if not input_data:
        raise ValueError("Empty input provided.")
    numbers = list(map(float, input_data.split()))
    print(mean_absolute_deviation(numbers))