def cut_vector(vector):
    total = sum(vector)
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = total - left_sum
        
        if abs(left_sum - right_sum) < min_diff or min_diff == float('inf'):
            min_diff = abs(left_sum - right_sum)
            split_index = i
    
    return vector[:split_index], vector[split_index:]