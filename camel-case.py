def camel_case(input_str):
    return (
        "".join(word.capitalize() for word in input_str.split())
        if "-" not in input_str
        else " ".join(segment.title() for segment in input_str.split("-"))
    )