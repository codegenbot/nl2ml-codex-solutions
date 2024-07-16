import re

def fix_spaces():
    text = input("Enter the text: ").strip()
    text = re.sub(r'\s{2,}', '_', text)
    return "_".join(text.split())

# Call the function to run the program
result = fix_spaces()
print(result)