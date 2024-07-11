input_str = input()
starting_height = float(input_str)

first_bounce_height = 0.6 * starting_height
num_bounces = float(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height + 2 * first_bounce_height * sum([bounciness_index ** (2 * i) for i in range(1, num_bounces + 1)])

print(total_distance)