def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())
    total_distance = 2 * (1 - math.pow(hf / h0, 2)) * num_bounces
    return str(round(total_distance, 4))


print(bouncing_balls())