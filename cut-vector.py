def cut_vector(vector):
    if len(vector) == 1:
        return [vector], []

    min_diff = float("inf")
    cut_index = -1

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)

        if diff < min_diff or (diff == 0 and i > 0):
            min_diff = diff
            cut_index = i

    return vector[: cut_index + 1], vector[cut_index:]