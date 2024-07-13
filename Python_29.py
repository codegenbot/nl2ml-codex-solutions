prefix = input("Enter a prefix: ")
words = []

while True:
    user_word = input("Enter a word (or 'stop' to finish): ")
    if user_word.lower() == "stop":
        break
    words.append(user_word)

expected_word = None
for word in words:
    if word.startswith(prefix):
        print(f"Found match: {word}")
    elif expected_word is not None and expected_word.lower() == word.lower():
        print(f"Found match: {word}")
        expected_word = None
    else:
        expected_word = input(
            f"Enter an expected word for the prefix {prefix} (or 'stop' to finish): "
        )