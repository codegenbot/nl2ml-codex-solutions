import hashlib

def string_to_md5(text):
    return hashlib.md5(text.encode()).hexdigest()

text = input("Enter the text: ")
result = string_to_md5(text)
print(result)