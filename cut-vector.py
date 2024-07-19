def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0
    min_left_sum = sum(vector[:1])
    min_right_sum = sum(vector[1:])

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i+1:])

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[:split_index+1], vector[split_index+1:]