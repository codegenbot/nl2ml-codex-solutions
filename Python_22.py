from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input().strip().replace(',', ' ').split()
    values = []
    for x in user_input:
        try:
            values.append(int(x))
        except ValueError:
            values.append(x)  # Keep non-integer values as is
    print(filter_integers(values))