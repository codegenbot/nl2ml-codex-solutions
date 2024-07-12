def decode_cyclic():
    while True:
        s = input("Enter an encoded string (or 'quit' to finish): ")
        if s.lower() == "quit":
            break
    print()

    while True:
        n = input(
            "Enter 1 for linear decoding and any other number for cyclic decoding: "
        )
        if n.isdigit() and (n == "1" or int(n) > 0):
            break
        else:
            print("Invalid input. Please enter either 1 or a number greater than 0.")

    if n == "1":
        print(s)
    else:
        result = s[0]
        for i, char in enumerate(s[1:], start=2):
            if i % 3 == 1:
                result += char
            elif i % 3 == 2:
                result += char
            else:
                result += result[-1]
        print(result)