from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[: i + 1] for i in range(len(string)]

user_input = input("Enter a string: ")
result = all_prefixes(user_input)
print(result)