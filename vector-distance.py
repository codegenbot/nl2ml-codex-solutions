n = int(input())
vec1 = [float(x) for x in input().split()]
vec2 = [float(x) for x in input().split()]


def euclidean_distance(vec1, vec2):
    return sum((x - y) ** 2 for x, y in zip(vec1, vec2)) ** 0.5


print(euclidean_distance(vec1, vec2))