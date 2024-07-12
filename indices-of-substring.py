def indices_of_substring(text, target):
    indices = [i for i in range(len(text) - len(target) + 2) if text[i:i + len(target)] == target]
    return indices

text = input()
target = input()
result = indices_of_substring(text, target)
for idx in result:
    print(idx, end=" ")