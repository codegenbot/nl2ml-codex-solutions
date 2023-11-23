from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    
    return result

numbers = [5, 10, 15, 20]
delimiter = 100

output = intersperse(numbers, delimiter)
print(*output)