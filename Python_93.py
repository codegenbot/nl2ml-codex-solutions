def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a')) if char.islower() else chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
            else:
                if char.islower():
                    result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
                else:
                    result += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a')).upper()
        else:
            result += char
    return result