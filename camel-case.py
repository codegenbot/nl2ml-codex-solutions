```
def camel_case(input_string):
    return "".join(word.capitalize() if i > 0 else word for i, word in enumerate(input_string.split()))