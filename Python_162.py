import hashlib

def string_to_md5():
    text = input("Enter some text: ")
    if not text:
        return None
    return hashlib.md5(text).hexdigest()