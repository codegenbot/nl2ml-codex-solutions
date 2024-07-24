def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height

    num_bounces = int(input())

    total_distance = 0
    height = s_height
    for _ in range(num_bounces):
        total_distance += 2 * height
        height *= bounciness_index

    print(format(total_distance, ".4f"))


bouncing_balls()