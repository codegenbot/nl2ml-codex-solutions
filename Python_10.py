Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        i = len(string) - 1
        while i > 0 and string[i] == string[0]:
            i -= 1
        return string + string[i-1::-1]
    else:
        prefix = ''
        for char in string:
            if char.isalpha():
                prefix += char
                break
        suffix = string[::-1].lower()
        while len(suffix) > len(prefix) and not is_palindrome(prefix + suffix):
            suffix = suffix[1:]
        return prefix + suffix