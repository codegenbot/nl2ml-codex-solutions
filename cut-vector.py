```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            split_index = i

    return vector[:split_index], sum(vector[:split_index]), vector[split_index:], sum(vector[split_index:])