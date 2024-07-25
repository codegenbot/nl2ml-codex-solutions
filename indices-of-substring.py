def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices


text = input()
target = input()
result = indices_of_substring(text, target)
for index in result:
    print(index, end=" ")