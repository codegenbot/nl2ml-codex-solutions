starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height

for i in range(2, num_bounces + 1):
    total_distance += 2 * first_bounce_height * sum([bounciness_index ** j for j in range(1, i+1)])

print(total_distance)