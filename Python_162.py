import hashlib

def string_to_md5(text):
    if not text:
        return None
    return hashlib.md5(text.encode()).hexdigest()

# Get input from user
input_text = input("Enter text to convert to MD5: ")

# Call the function with the input text
result = string_to_md5(input_text)

# Print the MD5 hash
print(result)