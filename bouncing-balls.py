def calculate_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height * (
        1
        + 1
        / (1 - bounciness_index)
        * (1 - bounciness_index**num_bounces)
        / (1 - bounciness_index**2)
    )
    return total_distance