start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = pow(first_bounce_height / start_height, 1/2)
total_distance = start_height * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index)

print("{:.6f}".format(total_distance))