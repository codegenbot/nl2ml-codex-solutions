```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers = sorted(set(numbers))
    closest_diff = float('inf')
    closest_pair = (None, None)
    
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i + 1] - numbers[i])
        
        if diff < closest_diff:
            closest_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
            
    return (*closest_pair,)