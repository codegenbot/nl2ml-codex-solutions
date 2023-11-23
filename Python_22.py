from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]

values = list(map(int, input().split()))

result = filter_integers(values)

print(result)