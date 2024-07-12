def decode_cyclic():
    s = input("Enter a string: ")
    n = int(
        input("Enter 1 for linear decoding and any other number for cyclic decoding: ")
    )

    if n == 1:
        print(s)
    else:
        result = [s[0], s[1]]
        for char in s[2:]:
            if len(result) % 3 == 1:
                result.append(char)
            elif len(result) % 3 == 2:
                result.extend([char])
        print("".join(result))


decode_cyclic()