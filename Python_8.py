from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

# Take input from user and store numbers in a list
numbers = list(map(int, input().split()))

# Call the function with the input numbers
result = sum_product(numbers)
print(result)