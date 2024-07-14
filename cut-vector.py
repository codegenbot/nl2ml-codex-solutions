```
def cut_vector(vector):
    min_diff = float('inf')
    split_index = 0
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if left_sum == right_sum:
            return vector[:i], vector[i:]
        
        diff = abs(left_sum - right_sum)
        
        if diff < min_diff:
            min_diff = diff
            split_index = i
    
    left_half = vector[:split_index]
    right_half = vector[split_index:]
    
    left_sum = sum(left_half)
    right_sum = sum(right_half)
    
    if abs(left_sum - right_sum) == min_diff:
        return left_half, right_half
    else:
        return vector[:1], vector[1:]