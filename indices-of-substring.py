def indices_of_substring():
    text = input().strip().lower()
    target = input().strip().lower()

    indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)].lower() == target]

    for index in indices:
        print(int(index))  # Print the index as an integer

indices_of_substring()