def indices_of_substring():
    text = input().strip()
    target = input().strip()
    indices = [i for i in range(len(text)) if text[i:].startswith(target)]
    for index in indices:
        print(index)


indices_of_substring()