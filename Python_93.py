```python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a'))
            else:
                result += char.swapcase()
        else:
            result += char
    return result