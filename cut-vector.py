def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum or (abs(left_sum - right_sum) < min_diff):
            return vector[:i], vector[i:]