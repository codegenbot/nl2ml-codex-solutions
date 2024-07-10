user_input = input("Enter an alphanumeric string: ").strip().replace(" ", "")
if not user_input.isalnum():
    print("Invalid input. Please enter an alphanumeric string.")
else:
    result = "".join([
        chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() else ch
        for ch in user_input
    ])
    print(result)