def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        if string[i:] == string[i:] + reverse(string[:i]):
            return string[:i] + string[:i][::-1] + string[i:]
    return string + reverse(string)