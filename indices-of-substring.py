def indices_of_substring():
    text = input().strip()
    target = input().strip()
    indices = [i for i in range(len(text)) if text.startswith(target, i)]
    for i in indices:
        print(i)


indices_of_substring()