def indices_of_substring(text):
    target = input()
    result = [i for i in range(len(text)) if text.startswith(target, i)]
    return str(result).replace("[", "").replace("]", "")