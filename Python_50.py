Here is the modified code:

def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset) % 26) + ascii_offset) if abs(ord(ch) - ascii_offset) >= ord('a') and abs(ord(ch) - ascii_offset) <= ord('z') else ch
        else:
            result += ch
    return result