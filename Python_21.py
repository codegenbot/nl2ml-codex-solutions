from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    try:
        if len(numbers) < 2:
            return []
        min_num = min(numbers)
        max_num = max(numbers)
        return [(x - min_num) / (max_num - min_num) for x in numbers] if all(isinstance(x, float) for x in numbers) else []
    except:
        return []