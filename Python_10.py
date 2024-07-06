def is_palindrome(string: str) -> bool:
    """Test if given string is a palindrome"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        prefix = string[:i]
        postfix = string[i:][::-1]
        if prefix + postfix == (string + postfix)[::-1]:
            return string + postfix