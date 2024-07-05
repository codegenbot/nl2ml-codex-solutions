```
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = 0

    min_diff = float("inf")
    split_index = 0

    for i in range(len(vector)):
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            split_index = i

        left_sum += vector[i]

    return str(vector[:split_index+1]), str(vector[split_index+1:])