def all_prefixes(string):
    return [string[:i + 1] for i in range(len(string))] 

input_string = input("Enter a string: ").strip()
result = all_prefixes(input_string)
print(result)