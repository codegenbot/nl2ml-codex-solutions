from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

numbers = list(map(int, list(input().strip().split())))  
output = remove_duplicates(numbers)
print(output)