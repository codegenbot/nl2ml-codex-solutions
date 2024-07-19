from typing import List, Tuple

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for num in numbers:
        product_result *= num
    return sum_result, product_result

if __name__ == "__main__":
    numbers = [int(x) for x in input("Enter numbers separated by space: ").split()]
    result = sum_product(numbers)
    print(*result)