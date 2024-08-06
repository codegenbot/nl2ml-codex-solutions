Here is the solution:

def cut_vector(vector):
    min_diff = float('inf')
    cut_index = 0
    
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        
        if abs(left_sum - right_sum) < min_diff:
            min_diff = abs(left_sum - right_sum)
            cut_index = i
    
    return vector[:cut_index], vector[cut_index:]