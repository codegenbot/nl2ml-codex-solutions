def digitSum(s):
    return sum(int(c) for c in s if c.isdigit()) or -1

input_s = str(input("Enter a string: "))
print(digitSum(input_s))