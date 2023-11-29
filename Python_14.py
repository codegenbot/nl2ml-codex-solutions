from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return "\n".join(prefixes)


string = input()
result = all_prefixes(string)
print(result)