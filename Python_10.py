def make_palindrome(string: str) -> str:
    for i in range(len(string), 0, -1):
        if string[:i] == string[:i][::-1]:
            return string + string[0].upper() + string[i - 1 :].lower()