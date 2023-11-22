def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for num in numbers:
        result.append(num)
        result.append(delimiter)
    return result