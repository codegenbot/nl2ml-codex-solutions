import hashlib

def string_to_md5(text):
    if isinstance(text, str) and text != "":
        return hashlib.md5(text.encode()).hexdigest()
    else:
        return None