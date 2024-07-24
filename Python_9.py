```
def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = numbers[0]
    result = [max_seen_so_far]

    for num in numbers[1:]:
        if num > max_seen_so_far:
            max_seen_so_far = num
        result.append(max_seen_so_far)

    return result