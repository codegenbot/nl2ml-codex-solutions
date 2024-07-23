```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            return string + postfix[::-1].translate({c2: '' for c, c2 in zip(string, postfix[::-1])})