import hashlib

def string_to_md5():
    text = input("Enter the text: ")
    return hashlib.md5(text.encode()).hexdigest() if text != "" else ""