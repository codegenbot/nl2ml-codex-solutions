from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

try:
    numbers = list(map(int, input().split()))
except ValueError:
    print("Invalid input. Please provide valid integers separated by spaces.")
    exit()

result_sum, result_product = sum_product(numbers)
print(result_sum, result_product)