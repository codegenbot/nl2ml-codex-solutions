```Python
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        new_string = string[i:] + string[:i][::-1]
        if new_string == new_string[::-1]:
            return new_string
    return string + "".join(reversed(string))