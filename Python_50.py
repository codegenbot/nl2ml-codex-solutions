```
s = input("Enter a string: ")
print("".join([chr(((ord(ch) - 97 - 5) % 26) + 97) if ch.isalpha() and ch.islower() else 
                    chr(((ord(ch) - 65 - 5) % 26) + 65) if ch.isalpha() and ch.isupper() else 
                    ch for ch in s]))