def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(number - mean) for number in numbers]
    return sum(deviation) / len(deviation)