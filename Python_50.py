```
def decode_shift():
    s = input("Enter the ciphertext: ")
    while True:
        try:
            shift = int(input("Enter the shift value (1-25): "))
            if 1 <= shift <= 25:
                break
            else:
                print("Invalid input! Please enter a number between 1 and 25.")
        except ValueError:
            print("Invalid input! Please enter an integer.")

    return "".join([chr(((ord(ch.lower()) - ord('a') + shift) % 26) + (ch.isalpha() and 'a' or '')) if ch.isalpha() else ch for ch in s])