def indices_of_substring():
    text = input()
    target = input()
    indices = [i for i in range(len(text)) if text[i:i + len(target)] == target]
    for index in indices:
        print(index)

indices_of_substring()