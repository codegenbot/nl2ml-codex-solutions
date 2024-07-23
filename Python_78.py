```
def hex_key(num):
    count = 0
    for char in num:
        if char.upper() == 'B' or char.upper() == 'D':
            count += 1
        elif char.isdigit():
            decimal = int(char, 16)
            if decimal > 1 and all(decimal % i for i in range(2, int(decimal**0.5) + 1)):
                count += 1
    return count