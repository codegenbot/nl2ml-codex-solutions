def make_palindrome(string: str) -> str:
    for i in range(len(string) - 1, -1, -1):
        if is_palindrome(string[i:]):
            return string + string[:i][::-1]
    return string