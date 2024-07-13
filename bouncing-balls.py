def bouncing_balls():
    start_height = float(input("Enter the starting height: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness_index = (first_bounce_height / start_height)

    total_distance = 0
    prev_height = start_height
    for _ in range(num_bounces): 
        up_distance = abs((prev_height * 0.8 - prev_height) * 2)
        down_distance = up_distance
        total_distance += up_distance + down_distance
        prev_height *= 0.8

    print("The total distance traveled is: ", round(total_distance, 2))