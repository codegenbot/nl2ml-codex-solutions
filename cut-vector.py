def cut_vector(vector):
    if sum(vector) % 2 == 0:
        return [vector[:len(vector)//2], vector[len(vector)//2:]]
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]