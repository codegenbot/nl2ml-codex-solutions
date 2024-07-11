def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = min(first_bounce_height / starting_height, 1.0)
    
    total_distance = 0.0
    
    cumulative_height = starting_height

    for _ in range(num_bounces):
        total_distance += cumulative_height  # Travel distance up
        cumulative_height *= bounciness_index
        total_distance += 2 * cumulative_height  # Travel distance down and up

    return round(total_distance, 12)