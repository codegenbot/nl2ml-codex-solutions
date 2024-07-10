```
from typing import List

def concatenate(strings: List[str]) -> str:
    if not strings:
        return ''
    result = ', '.join(map(str, strings))
    return result

if __name__ == '__main__':
    n = int(input("Enter number of strings: "))
    strings = []
    for _ in range(n):
        user_input = input()
        strings.append(user_input)
    print(concatenate(strings))
    if n != 0:
        input("Press Enter to see additional output...")
        print(concatenate(['hello', 'world']))