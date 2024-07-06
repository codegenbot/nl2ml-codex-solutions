```
def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    middle_char = ""

    if len(string) % 2 == 0:
        new_string = string + reverse
    else:
        middle_char = string[len(string) // 2]
        new_string = middle_char + string[: len(string) // 2] + reverse

    return new_string