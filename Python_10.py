Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        if string[i:] == string[i:] + reversed(string[:i]).__str__():
            return string + ''.join(reversed(string[:i]))
    return string + ''.join(reversed(string))