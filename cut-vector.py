def cut_vector(vector):
    n = len(vector)
    min_diff = float("inf")
    split_index = -1
    for i in range(1, n):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:], [0]