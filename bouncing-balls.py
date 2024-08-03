def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (1 + 2**0.5) * (
        start_height * (bounciness_index ** (num_bounces + 1)) - start_height
    )

    print("{:.3f}".format(total_distance))


bouncing_balls()