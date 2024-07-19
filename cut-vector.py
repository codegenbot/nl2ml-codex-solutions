def cut_vector(vector):
    min_diff = float('inf')
    split_index = -1
    for i in range(1, len(vector)-1):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i+1:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff and (diff == 0 or i+1 > 1):
            min_diff = diff
            split_index = i

    if split_index == -1:
        return vector[:], vector[:]
    else:
        return vector[:split_index+1], vector[split_index:]