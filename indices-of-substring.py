text = input()
target = input()

indices = [i for i in range(len(text) - len(target)) if text[i:i + len(target)] == target]
for index in indices:
    print(index, end=" ")