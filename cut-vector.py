def cut_vector(vector):
    if sum(vector) % len(vector) == 0:  
        return [vector], []
    min_diff = float("inf")
    split_index = 0
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        diff = abs(left_sum - right_sum)
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        elif diff < min_diff:
            min_diff = diff
            split_index = i
    return vector[:split_index], vector[split_index:]