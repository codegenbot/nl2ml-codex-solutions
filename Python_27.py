def modify_string(string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in string])

input_string = input("Enter a string: ")
output_string = modify_string(input_string)
print(output_string)