def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0
    for i in range(1, len(lst)):
        left = lst[:i]
        right = lst[i:]
        if left == right:
            return left, right
        diff = abs(sum(left) - sum(right))
        if diff < min_diff:
            min_diff = diff
            split_idx = i
    return lst[:split_idx], lst[split_idx:]