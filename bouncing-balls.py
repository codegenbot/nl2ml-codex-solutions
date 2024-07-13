import math

start_height = float(input("Enter the starting height: "))
first_bounce_height = float(input("Enter the first bounce height: "))
num_bounces = int(input("Enter the number of bounces: "))

bounciness_index = (1 - (first_bounce_height / start_height)) ** 2
total_distance = 0

for i in range(num_bounces):
    total_distance += start_height * math.pow(0.5, i + 1)
print(total_distance)