starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height

total_distance = 0
for _ in range(num_bounces):
    total_distance += 2 * (1 - bounciness_index) + bounciness_index

print(round(total_distance, 4))