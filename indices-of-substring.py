text = input()
target = input()

indices = []
index = -1
while (index := text.find(target, index + 1 if index != -1 else 0)) != -1:
    indices.append(index)

print(*indices)