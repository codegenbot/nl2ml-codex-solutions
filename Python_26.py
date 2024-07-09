from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in numbers if numbers.count(num) == 1]

def main():
    numbers = list(map(int, input().split()))
    print(remove_duplicates(numbers))

main()