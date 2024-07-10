import hashlib

def string_to_md5(text):
    if text:
        return hashlib.md5(text.encode()).hexdigest()
    return None

if __name__ == "__main__":
    try:
        while True:
            print("Enter a string to get its MD5 hash:")
            user_input = input()
            if user_input == "":
                break
            result = string_to_md5(user_input)
            print("MD5 hash of the input string is:", result)

    except EOFError:
        break