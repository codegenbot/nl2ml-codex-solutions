def cut_vector(lst):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(lst)):
        left_sum = sum(lst[:i])
        right_sum = sum(lst[i:])

        if left_sum == right_sum:
            return [lst[:i], lst[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    left_sum = sum(lst[:split_index])
    right_sum = sum(lst[split_index:])

    return [lst[:split_index], lst[split_index:]]