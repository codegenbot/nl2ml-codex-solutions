Here is the modified code:

```
import re

def fix_spaces(text):
    text = re.sub(r'\s+', ' ', text).strip()
    return text

print("Welcome to the space fixing program!")

text = ""
while True:
    line = input("Enter a line of text (or 'q' if you're done): ")
    if line.lower() == 'q':
        break
    text += line + " "
text = text.strip().replace("   ", " ").strip()
print(fix_spaces(text))