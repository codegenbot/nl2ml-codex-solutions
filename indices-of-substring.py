def indices_of_substring():
    text = input()
    target = input()
    indices = [i for i in range(len(text)) if text[i : i + len(target)] == target]
    for idx in indices:
        print(idx)


indices_of_substring()