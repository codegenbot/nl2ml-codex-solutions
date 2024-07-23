def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 2 * first_bounce_height

    for _ in range(num_bounces):
        distance_per_bounce = 2 * (first_bounce_height / (1 - bounciness_index))
        total_distance += distance_per_bounce
        first_bounce_height /= (1 - bounciness_index)

    return format(total_distance, ".4f")