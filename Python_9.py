```
def rolling_max(numbers):
    result = [numbers[0]]
    max_so_far = numbers[0]
    for num in numbers[1:]:
        if num > max_so_far:
            max_so_far = num
        result.append(max(num, max_so_far))
    return result