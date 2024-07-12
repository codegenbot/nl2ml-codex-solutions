import hashlib


def string_to_md5(text):
    if not text:
        return None
    md5_hash = hashlib.md5()
    md5_hash.update(text.encode())
    return md5_hash.hexdigest()


user_input = input("Enter a string: ")
print(string_to_md5(user_input))