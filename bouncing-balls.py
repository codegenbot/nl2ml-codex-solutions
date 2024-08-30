def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (1 + bounciness_index) ** (_ * 2)

    return str(round(total_distance, 4))


print(bouncing_balls())