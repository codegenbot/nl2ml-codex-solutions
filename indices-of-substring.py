def indices_of_substring(text):
    target = input("Enter the target string: ")
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)
        pos += 1

    return result

print(indices_of_substring(input("Enter the main text: ")))