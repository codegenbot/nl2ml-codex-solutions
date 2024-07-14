def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    total_distance = 0
    for _ in range(n):
        total_distance += (2 * h + 2 * hb) / bi
        h, hb = hb, (hb * bi)
    return round(total_distance, 5)


print(bouncing_balls())