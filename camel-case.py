def camel_case(s):
    return " ".join(word.capitalize() for word in s.split(" - ") if word).replace(
        "-", ""
    )


print(camel_case(input()))