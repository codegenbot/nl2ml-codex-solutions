def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num

    return (total_sum if total_sum != 0 else 0, product if product != 0 else 1)