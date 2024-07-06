from typing import List

def filter_integers(values: List[object]) -> list[int]:
    return [value for value in values if isinstance(value, int)]