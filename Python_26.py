from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in set(numbers) if numbers.count(num) == 1]

numbers = list(map(int, input().strip().split()))
print(remove_duplicates(numbers))