n, m = map(int, input("Enter number of sides for Peter's die and Colin's die: ").split())
print(round(sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j) / (n*m), 8))