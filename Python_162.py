import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

if __name__ == "__main__":
    user_input = input().strip()
    if user_input:
        print(string_to_md5(user_input))
    else:
        print(None)