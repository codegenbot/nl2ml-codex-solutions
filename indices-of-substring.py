text = input()
target = input()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target or text[i:i+len(target)] == target[::-1] or text[i:i+len(target)] == target[::-1][::-1]]

print(' '.join(map(str, indices)))