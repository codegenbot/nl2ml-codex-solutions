Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), eval('*'.join(map(str, numbers)))) if numbers else (0, 1)