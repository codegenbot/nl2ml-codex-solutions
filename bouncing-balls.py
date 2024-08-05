def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        (1 + 2) * ((1 - bounciness_index) ** num_bounces) / (1 - bounciness_index)
    )

    return str(bounciness_index) + "\n" + str(total_distance)


print(bouncing_balls())