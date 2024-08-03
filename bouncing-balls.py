```
def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    
    num_bounces = int(input())
    
    total_distance = 0
    for _ in range(num_bounces):
        first_bounce_height /= (1 + 0.5)
        total_distance += first_bounce_height * 2
    
    return round(total_distance, 4)

print(bouncing_balls())