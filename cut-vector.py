```
def cut_vector(vector):
    min_diff = float('inf')
    split_index = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    if split_index == -1:
        return "No split found"

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum or abs(left_sum - right_sum) == min_diff:
            return vector[:i+1], vector[i:]

    return "No split found"