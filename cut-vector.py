def cut_vector(vector):
    min_diff = float("inf")
    split_point = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return vector[:i], vector[i:]

        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_point = i

    left_sum = sum(vector[:split_point])
    right_sum = sum(vector[split_point:])

    return vector[:split_point], vector[split_point:]