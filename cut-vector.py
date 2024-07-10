def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if (diff < min_diff) and ((diff == 0 and i > 1) or (diff == 1 and i == 2)):
            min_diff = diff
            split_idx = i

    return lst[:split_idx], lst[split_idx:]