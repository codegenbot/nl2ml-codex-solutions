def cut_vector(lst):
    n = len(lst)
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, n):
        diff = abs(np.mean(lst[:i]) - np.mean(lst[i:]))

        if diff < min_diff:
            min_diff = diff
            split_idx = i

    return [lst[:split_idx], lst[split_idx:]]