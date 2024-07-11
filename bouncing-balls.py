start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

total_distance = 0
current_height = start_height
for _ in range(num_bounces):
    distance_traveled = current_height * (1 + bounciness_index)
    total_distance += distance_traveled
    current_height *= 2 ** (-bounciness_index)  
print(int(total_distance))