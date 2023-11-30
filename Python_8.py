def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_ = 0
    product = 1
    for num in numbers:
        sum_ += num
        product *= num
    return sum_, product