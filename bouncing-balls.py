def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = first_bounce_height
    for _ in range(num_bounces):
        height /= bounciness_index
        total_distance += 2 * height

    print(f"{total_distance:.4f}")


bouncing_balls()