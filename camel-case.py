def camel_case(input_str):
    return (
        "".join(word.capitalize() for word in input_str.split("-"))
        if " " not in input_str
        else input_str
    )


while True:
    user_input = input("input: ")
    print(f"output: {camel_case(user_input)}")