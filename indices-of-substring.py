def indices_of_substring():
    text = input("Enter text string: ")
    target = input("Enter target string: ")
    result = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
    return str(result)

print(indices_of_substring())