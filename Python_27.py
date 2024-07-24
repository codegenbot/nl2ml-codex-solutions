def check(string):
    return modify_string(string)

def modify_string(string):
    return "".join(
        [char.lower() if char.isupper() else char.upper() for char in string]
    )

input_string = "abcdEFGH"
output = check(input_string)
print(output)