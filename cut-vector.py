```
def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            if left_sum == right_sum:
                return lst[:i], lst[i:]
            min_diff = diff
            split_idx = i
    return lst[:split_idx], lst[split_idx:]