def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())
    total_distance = 2 * (1 - math.pow(bounciness_index, -num_bounces)) * h0
    print(format(total_distance, ".4f"))


bouncing_balls()