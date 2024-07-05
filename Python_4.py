from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    mad = sum(abs(x - mean) for x in numbers) / len(numbers)
    return mad

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    numbers = list(map(float, input().strip().split()))
    result = mean_absolute_deviation(numbers)
    print(result)