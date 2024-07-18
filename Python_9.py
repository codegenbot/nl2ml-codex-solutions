from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

numbers = []
while True:
    try:
        number = int(input())
        numbers.append(number)
    except:
        break

result = rolling_max(numbers)
print(result)