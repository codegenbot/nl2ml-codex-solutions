def cut_vector(lst):
    if len(set(lst)) == 1:
        return [lst], []

    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if (diff == 0 and i > 1) or (diff < min_diff):
            min_diff = diff
            split_idx = i

    return lst[:split_idx], lst[split_idx:]