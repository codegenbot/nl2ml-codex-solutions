def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    return sum(numbers), (
        1 if 0 in numbers else eval("*".join(str(num) for num in numbers))
    )