def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0

    for i in range(1, len(lst)):
        diff = abs(sum(lst[:i]) - sum(lst[i:]))

        if diff == 0 or (diff < min_diff and i > 1):
            min_diff = diff
            split_idx = i

    return lst[:split_idx], lst[split_idx:]


print(cut_vector([2, 1897, 2594]))