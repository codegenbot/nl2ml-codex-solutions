def cut_vector(vector):
    n = len(vector)
    sum_left = 0
    sum_right = sum(vector)
    min_diff = float("inf")
    cut_index = -1

    for i in range(n):
        sum_left += vector[i]
        sum_right -= vector[i]
        diff = abs(sum_left - sum_right)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index + 1 :]