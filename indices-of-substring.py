def indices_of_substring(text, target):
    return [i for i in range(len(text) - len(target) + 1) if text.startswith(target, i)]