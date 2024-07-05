import math

def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        total_distance += math.log(start_height * bounciness_index)
        start_height *= (1 - 0.5)  

    return round(start_height * bounciness_index ** num_bounces, 4)

print(round(bouncing_balls(), 4))