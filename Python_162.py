import hashlib

def string_to_md5():
    text = input("Enter the text to convert to MD5: ")
    return hashlib.md5(text.encode()).hexdigest() if text != "" else ""