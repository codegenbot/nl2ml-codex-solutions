import hashlib

def string_to_md5(text):
    if text.strip() == "":
        return None
    else:
        return hashlib.md5(text.encode()).hexdigest()

text = input().strip()
result = string_to_md5(text)
print(result)