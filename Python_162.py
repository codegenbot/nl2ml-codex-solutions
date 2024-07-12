```Python
import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None

text = input("Please enter some text: ")
print(string_to_md5(text))