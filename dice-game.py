n = int(input())
m = int(input())

def probability_of_higher(n, m):
    count = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                count += 1
    return count / (n * m)

result = probability_of_higher(n, m)
print("{:.7f}".format(result))