from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (-len(x), x))

if __name__ == "__main__":
    strings = [input().strip() for _ in range(int(input("Enter the number of strings: "))]
    print(longest(strings))