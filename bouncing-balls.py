```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    
    num_bounces = int(input())
    
    total_distance = 0
    height = start_height
    for _ in range(num_bounces):
        height *= bounciness_index * 2
        total_distance += height - start_height
    
    return str.format("{:.3f}", total_distance)

print(bouncing_balls())