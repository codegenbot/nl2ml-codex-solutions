def prefixes(string):
    return [string[:i] for i in range(1, len(string) + 1)]

try:
    input_string = input().strip()
    if input_string:
        print(*prefixes(input_string), sep='\n')
    else:
        print("No input provided.")
except (EOFError, KeyboardInterrupt):
    print("No input provided.")
except Exception as e:
    print(f"Error: {e}")