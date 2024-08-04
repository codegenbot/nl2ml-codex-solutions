import hashlib


def string_to_md5(text):
    if text is None or text == "":
        return None
    return hashlib.md5(text.encode()).hexdigest()