Here is the completed Python code:

def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(range(1, i+1)) for i in range(len(numbers))]
    return result