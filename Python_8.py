from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1
    for num in numbers:
        total_product *= num
    return total_sum, total_product

if __name__ == "__main__":
    try:
        numbers = list(map(int, input("Enter numbers separated by spaces: ").strip().split()))
        result = sum_product(numbers)
        print(result)
    except ValueError:
        print("Please enter valid integers.")