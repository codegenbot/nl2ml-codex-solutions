def manipulate_string(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

result = manipulate_string(input())
print(result)