from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:  
        return 0 
    try:
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except ZeroDivisionError:
        return "Divide by zero error. Please enter at least one number."
    except TypeError:
        return "Invalid input. Please enter only numbers."