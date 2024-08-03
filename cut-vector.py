def cut_vector(vector):
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(vector)):
        right_sum = sum(vector[i + 1 :])
        diff = abs(left_sum - right_sum)

        if diff == 0:
            return [vector[: i + 1], vector[i:]]

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    left_sum += sum(vector[cut_index + 1 :])
    return [vector[:cut_index], vector[cut_index:]]