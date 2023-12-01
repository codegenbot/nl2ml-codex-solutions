def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for number in numbers:
        product_result *= number
    return sum_result, product_result