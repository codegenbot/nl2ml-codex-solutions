Here is the completed code:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers) if numbers else 0
    product = 1
    for num in numbers:
        product *= num
    return (total_sum, product)