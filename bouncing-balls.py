```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    
    num_bounces = int(input())
    
    total_distance = (1 + bounciness_index) ** num_bounces * 2
    return round(total_distance, 5)

print(bouncing_balls())