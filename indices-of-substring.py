def indices_of_substring():
    text = input()
    target = input()
    indices = [i for i in range(len(text)) if text.find(target, i) == i]
    for index in indices:
        print(index)


indices_of_substring()