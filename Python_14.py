def generate_substrings(string):
    return [string[:i] for i in range(1, len(string) + 1)]


input_string = input()
print(generate_substrings(input_string))