```
import hashlib


def string_to_md5():
    text = input("Enter the text: ")
    if not text:
        return None
    return hashlib.md5(text.encode('utf-8')).hexdigest()