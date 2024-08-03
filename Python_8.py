from typing import List, Tuple


def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers) if numbers else 0
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result


# Call the function with the input numbers
numbers = list(map(int, input().split()))
result = sum_product(numbers)
print(result)