def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]

check(generate_substrings)