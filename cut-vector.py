def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0
    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])
        if abs(left_sum - right_sum) <= min_diff or (left_sum == right_sum):
            min_diff = abs(left_sum - right_sum)
            split_idx = i
    return lst[:split_idx], lst[split_idx:]