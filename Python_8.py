from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers) if numbers else 0
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

# Read input from the user
numbers = list(map(int, input().split()))

# Call the function with input and print the result
print(sum_product(numbers))