from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

user_input = input("Enter a list of numbers separated by spaces: ")
numbers = list(map(int, user_input.split()))

result = sum_product(numbers)
print(result)