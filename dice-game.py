n = int(input())
m = int(input())
total_outcomes = n * m
count_strictly_higher = sum(
    1 for i in range(1, n + 1) for j in range(1, m + 1) if i > j
)
probability = count_strictly_higher / total_outcomes
print("{:.2f}".format(probability))