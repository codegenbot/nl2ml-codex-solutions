from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0
    mean = sum(numbers) / len(numbers)
    return (sum(abs(num - mean) for num in numbers)) / len(numbers)


if __name__ == '__main__':
    # Testing the function
    numbers = [1, 2, 3, 4, 5]
    print(mean_absolute_deviation(numbers))