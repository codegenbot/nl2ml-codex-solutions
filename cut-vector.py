def cut_vector(vector):
    min_diff = float('inf')
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
        elif left_sum == right_sum and min_diff > 0: 
            return vector[:i], vector[i:]

    return vector[:cut_index], vector[cut_index:]