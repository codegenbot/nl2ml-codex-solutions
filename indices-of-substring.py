text = input()
target = input()

indices = [i + 1 for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target]
for index in indices:
    print(index, end=" ")