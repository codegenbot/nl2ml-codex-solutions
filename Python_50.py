```
def decode_shift():
    shift = int(input("Enter your shift value: "))
    s = input("Enter the string to be decoded: ")
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset - shift) % 26) + ascii_offset)
        else:
            result += ch
    return result