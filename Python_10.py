```python
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + reverse_half
    else:
        reverse_half = string[::-1]
        return "".join([reverse_half[:1], reverse_half[1:], string])