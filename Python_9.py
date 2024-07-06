```
def rolling_max(numbers: List[int]) -> List[int]:
    max_until_now = numbers[0]
    result = [max_until_now]
    
    for num in numbers[1:]:
        if num > max_until_now:
            max_until_now = num
        result.append(max_until_now)
        
    return result