def filter_strings(strings, substring):
    return [s for s in strings if substring in s]

input_string = input("Enter a list of strings separated by space (in quotes):\n") 
strings = input_string.split()
substring = input("Enter a substring to filter by: ")
print(filter_strings(strings, substring))