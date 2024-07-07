def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        total_distance += (
            (2**0.5)
            * ((1 + bounciness_index) ** (1) - (1 - bounciness_index) ** (1))
            / ((1 + bounciness_index) ** 1 - (1 - bounciness_index) ** 1)
        )

    print("%.3f" % total_distance)


bouncing_balls()