```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (1 - bounciness**2) ** (num_bounces + 1)
    
    return str(round(start_height * total_distance, 4))


print(bouncing_balls())