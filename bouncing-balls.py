```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 2 * (num_bounces + 1) * start_height * (1 - bounciness_index ** (num_bounces + 1)) / (1 - bounciness_index)

    return str(total_distance)