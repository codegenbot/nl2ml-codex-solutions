```
import hashlib

def string_to_md5():
    text = input("Enter your string: ")
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None