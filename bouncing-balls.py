def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (start_height + first_bounce_height) * (2**num_bounces)

    print(total_distance)


bouncing_balls()