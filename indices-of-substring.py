Here is the Python solution:

def indices_of_substring(text):
    return [i for i in range(len(text)) if text.startswith(text[i:i+len(text)], len(text)-len(text)+1)]

print(indices_of_substring(input()))