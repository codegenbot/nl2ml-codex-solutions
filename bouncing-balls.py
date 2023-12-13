starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0

for i in range(num_bounces):
    total_distance += starting_height + first_bounce_height
    starting_height *= bounciness_index
    first_bounce_height *= bounciness_index

print(total_distance)