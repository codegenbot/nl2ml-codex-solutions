
def sum_product(numbers: list[int]) -> Tuple[int, int]:
    return (sum(numbers), math.prod(numbers)) if numbers else (0, 1)