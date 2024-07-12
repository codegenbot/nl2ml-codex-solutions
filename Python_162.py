import hashlib

print("Please enter some text (alphanumeric characters only): ")
s = input()
if not s:
    print("Please enter some alphanumeric characters.")
else:
    output = hashlib.md5(s.encode()).hexdigest()
    if output:
        print(f"Output: {output}")