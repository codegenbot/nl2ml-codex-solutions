def odd_count(lst):
    result = []
    for i, s in enumerate(lst[0]):
        count = sum(1 for c in s if int(c) % 2 != 0)
        result.append(
            f"the number of odd elements {count}n the str{i+1}ng {i+1} of the {i+1}nput."
        )
    return result