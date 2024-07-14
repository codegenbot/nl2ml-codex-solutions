def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height
    total_distance = (2**num_bounces) * (1 + bounciness_index)

    print(f"{total_distance:.4f}")


bouncing_balls()