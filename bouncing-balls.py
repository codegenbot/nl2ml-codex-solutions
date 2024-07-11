def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = min(first_bounce_height / starting_height, 1.0)
    
    total_distance = starting_height
    
    cumulative_height = starting_height

    for _ in range(num_bounces):
        cumulative_height *= bounciness_index
        total_distance += 2 * cumulative_height
        
    return round(total_distance, 12)