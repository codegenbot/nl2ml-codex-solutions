def camel_case(input_str):
    return "".join(
        word.capitalize() if idx > 0 else word
        for idx, word in enumerate(input_str.replace("-", " ").split())
    )