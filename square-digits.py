n = input()
result = "".join(str(int(digit) ** 2) for digit in str(n))
print(result)