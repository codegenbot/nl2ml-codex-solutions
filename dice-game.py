n, m = int(input()), int(input())
print(round(sum([(n-i)/n * i/m for i in range(1, m)]), 8)