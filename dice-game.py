n = int(input())
m = int(input())
print("{:.2f}".format(sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j) / (n * m))  # Corrected code with additional closing parenthesis.