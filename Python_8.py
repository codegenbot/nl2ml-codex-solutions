Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    
    for num in numbers:
        total_sum += num
        product *= num
        
    return (total_sum, product) if len(numbers) > 0 else (0, 1)