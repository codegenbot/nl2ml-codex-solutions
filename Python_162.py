import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

text = input("Please enter a string to generate its MD5 hash: ").strip()
if text:
    result = string_to_md5(text)
    print(result)
else:
    print("The input string is empty.")