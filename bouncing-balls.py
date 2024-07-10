def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    n = int(input())
    total_distance = 2 * (h0 + hf) * (1 - math.pow(bounciness_index, n))
    return str(round(total_distance, 4))


print(bouncing_balls())