```
def encode_cyclic(s: str):
    result = []
    for i in range((len(s) + 2) // 3):
        start = 3 * i
        end = min(3 * i + 3, len(s))
        group = s[start:end]
        if len(group) == 3:
            result.append(group[1:] + group[0])
        else:
            result.append(group)
    return "".join(result)

def decode_cyclic(s: str):
    groups = [s[i:i+3] for i in range(0, len(s), 3)]
    result = ""
    for i, group in enumerate(groups):
        if i % 2 == 1:
            result += group[-1] + group[:-1]
        else:
            result += group
    return result