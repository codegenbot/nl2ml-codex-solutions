from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    if not isinstance(values, list):
        raise ValueError("Input is not a list")
    return [value for value in values if isinstance(value, int)]