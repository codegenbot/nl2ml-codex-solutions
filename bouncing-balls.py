def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    
    total_distance = starting_height
    bounce_height = first_bounce_height
    
    for _ in range(num_bounces):
        total_distance += bounce_height
        bounce_height *= bounciness_index
        total_distance += bounce_height
        
    return round(total_distance, 12)