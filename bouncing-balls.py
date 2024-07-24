def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height

    num_bounces = int(input())

    total_distance = 0
    current_height = f_height
    for _ in range(num_bounces):
        total_distance += (current_height + current_height) * 2
        current_height *= bounciness_index

    print(total_distance)


bouncing_balls()