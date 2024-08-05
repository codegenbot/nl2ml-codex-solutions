from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    sum_result = sum(numbers) if numbers else 0
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

print(sum_product([]))