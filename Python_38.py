def decode_cyclic(s: str, n: int):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [
        (group[-n % len(group):] + group[:-n % len(group)]) if len(group) == 3 else group for group in groups
    ]
    return "".join(groups)