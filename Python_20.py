```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(closest_pair[1] - closest_pair[0])
    
    for i in range(1, len(numbers) - 1):
        current_pair = (numbers[i], numbers[i+1])
        diff = abs(current_pair[1] - current_pair[0])
        
        if diff < min_diff:
            min_diff = diff
            closest_pair = current_pair
            
    return closest_pair