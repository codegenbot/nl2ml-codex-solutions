text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = [i for i in range(len(text) - len(target) + 1) if text[i:i + len(target)] == target or (i > 0 and text[i-1:i + len(target)] == target)]

print(indices)