def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2**num_bounces) * bounciness_index

    print("{:.3f}".format(total_distance))


bouncing_balls()