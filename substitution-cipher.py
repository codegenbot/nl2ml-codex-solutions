def substitution_cipher(input1, input2, input3):
    cipher = {}
    for i in range(len(input1)):
        cipher[input1[i]] = input2[i]

    result = ""
    for char in input3:
        if char in cipher:
            result += cipher[char]
        else:
            result += char

    return result