from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

if __name__ == "__main__":
    user_input = input("Enter space-separated values: ").strip()
    values = [int(x) if x.lstrip('-').isdigit() else x for x in user_input.split()]
    print(filter_integers(values))