from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input().strip()
    values = user_input.split()
    values = [int(x) if x.isdigit() else x for x in values]
    print(filter_integers(values))