text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = [i for i in range(len(text)) if text[i:i + len(target)] == target]

print(indices)