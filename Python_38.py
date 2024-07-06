def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [
        (group[1:] + group[0]) if len(group) == 3 else group[1:] + group[0]
        for group in groups
    ]
    return "".join(groups)