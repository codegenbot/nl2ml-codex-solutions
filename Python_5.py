from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

if __name__ == "__main__":
    numbers = list(map(int, input().strip().split()))
    delimiter = int(input().strip())
    result = intersperse(numbers, delimiter)
    print(result)