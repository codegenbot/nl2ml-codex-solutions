import hashlib

def string_to_md5(text):
    if text is None:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Read input from user
text = input("Enter the text to convert to MD5: ")

# Call the function with user input
result = string_to_md5(text)

# Output the MD5 hash
print(result)