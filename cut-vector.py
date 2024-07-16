def cut_vector(vector):
    if len(vector) <= 1:
        return vector, []

    left_sum = 0
    min_diff = float('inf')
    min_left_index, min_right_index = -1, -1

    for i in range(len(vector)):
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff <= min_diff:
            min_diff = diff
            min_left_index, min_right_index = left_sum, right_sum
        left_sum += vector[i]

    return vector[:min_left_index+1], vector[min_right_index:]