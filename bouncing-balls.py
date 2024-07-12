starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height

remaining_height = first_bounce_height

for _ in range(1, num_bounces):
    remaining_height *= bounciness_index * 2
    total_distance += 2 * remaining_height

print(total_distance)