import ast
s = ast.literal_eval(input())
result = "".join(chr(ord(char) - 1) for char in s)
print(result)