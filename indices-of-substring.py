text = input("Enter the text string: ").strip()
target = input("Enter the target string: ").strip()

indices = [i for i, _ in enumerate(text) if text.startswith(target, i)]

print(indices)