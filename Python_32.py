print("Enter the coefficients separated by space:")
coefficients = list(map(int, input().split()))
result = find_zero(coefficients)
print(result)