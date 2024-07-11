```
def decode_shift():
    while True:
        cont = input("Do you want to decode a string? (yes/no): ")
        if cont.lower() == "yes":
            break
        elif cont.lower() == "no":
            return
        else:
            print("Invalid input. Please enter 'yes' or 'no'.")

    while True:
        s = input("Enter the encoded string (format: '25-' or '26-'): ")
        if s.startswith("25-") or s.startswith("26-"):
            if s.startswith("25-"):
                shift = int(s[3:])
                s = s[4:]
            elif s.startswith("26-"):
                while True:
                    try:
                        shift = int(input(f"Enter the shift value: "))
                        break
                    except ValueError:
                        print("Invalid input. Please enter a valid integer.")
        else:
            print("Invalid input. Please enter '25-' or '26-'.")
            continue

        result = ""
        for ch in s:
            if "a" <= ch <= "z":
                result += chr((ord(ch) - ord("a") + shift) % 26 + ord("a"))
            elif "A" <= ch <= "Z":
                result += chr((ord(ch) - ord("A") + shift) % 26 + ord("A"))
            else:
                result += ch

        print(f"Decoded string: {result}")

        while True:
            cont = input("Do you want to decode another string? (yes/no): ")
            if cont.lower() == "yes":
                break
            elif cont.lower() == "no":
                return
            else:
                print("Invalid input. Please enter 'yes' or 'no'."